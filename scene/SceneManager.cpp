#include "SceneManager.h"
#include <cassert>

bool SceneManager::isGameEnd_ = false;

SceneManager* SceneManager::GetInstance()
{
	// �֐���static�ϐ��ŃC���X�^���X����
	static SceneManager instance;
	// �C���X�^���X��Ԃ�
	return &instance;
}

void SceneManager::Update(char keys[256], char oldkeys[256])
{
#pragma region �V�[���؂�ւ��@�\
	// ���V�[���̗\�񂪂���Ȃ�
	if (nextScene_) {
		// ���V�[���̏I��
		if (scene_) {
			scene_->Finalize();
			delete scene_;
		}

		// �V�[���؂�ւ�
		scene_ = nextScene_;
		nextScene_ = nullptr;

		// �V�[���}�l�[�W���[���Z�b�g
		scene_->SetSceneManager(this);

		// ���V�[��������������
		scene_->Initialize();
	}
#pragma endregion

	// ���s���V�[�����X�V����
	scene_->Update(keys, oldkeys);
}

void SceneManager::Draw()
{
	scene_->Draw();
}

void SceneManager::Finalize()
{
	// �Ō�̃V�[���̏I���Ɖ��
	scene_->Finalize();
	delete scene_;
}

void SceneManager::ChangeScene(const std::string& sceneName)
{
	assert(sceneFactory_);
	assert(nextScene_ == nullptr);

	// ���V�[���𐶐�
	nextScene_ = sceneFactory_->CreateScene(sceneName);
}

void SceneManager::EndGame()
{
	isGameEnd_ = true;
}
