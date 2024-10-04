#pragma once
#include "AbstractSceneFactory.h"
#include "BaseScene.h"

/// <summary>
/// �V�[���Ǘ�
/// </summary>
class SceneManager final
{
	//�ÓI�����o�ϐ�
private:
	//�Q�[���I���t���O
	static bool isGameEnd_;

private: // �����o�ϐ�
	// �V�[���t�@�N�g���[(�؂�Ă���)
	AbstractSceneFactory* sceneFactory_ = nullptr;
	// ���݃V�[��(���s���̃V�[��)
	BaseScene* scene_ = nullptr;
	// ���̃V�[��
	BaseScene* nextScene_ = nullptr;


public: // �ÓI�����o�֐�
	/// <summary>
	/// �V���O���g���C���X�^���X
	/// </summary>
	/// <returns>�C���X�^���X</returns>
	static SceneManager* GetInstance();

public: // �����o�֐�
	/// <summary>
	/// ���t���[���X�V
	/// </summary>
	void Update(char keys[256], char oldkeys[256]);

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	/// <summary>
	/// �I������
	/// </summary>
	void Finalize();

	/// <summary>
	/// ���V�[���\��
	/// </summary>
	/// <param name="sceneName">�V�[����</param>
	void ChangeScene(const std::string& sceneName);

	/// <summary>
	/// �Q�[�����I������
	/// </summary>
	void EndGame();

public: // �A�N�Z�b�T
	/// <summary>
	/// �V�[���t�@�N�g���[�̃Z�b�^�[
	/// </summary>
	/// <param name="sceneFactory"></param>
	void SetSceneFactory(AbstractSceneFactory* sceneFactory) { sceneFactory_ = sceneFactory; }

	/// <summary>
	/// �Q�[���I���t���O���擾����
	/// </summary>
	/// <returns></returns>
	bool GetIsGameEnd() {
		return isGameEnd_;
	}

private: // �����o�֐�(�V���O���g����)
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	SceneManager() = default;

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~SceneManager() = default;

	/// <summary>
	/// �R�s�[�R���X�g���N�^�𖳌���
	/// </summary>
	/// <param name="">����</param>
	SceneManager(const SceneManager&) = delete;

	/// <summary>
	/// ������Z�q�𖳌���
	/// </summary>
	/// <param name="">����</param>
	/// <returns></returns>
	const SceneManager& operator=(const SceneManager&) = delete;
};