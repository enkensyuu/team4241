#pragma once
#include "DxLib.h"

// �O���錾
class SceneManager;

/// <summary>
/// ���V�[���N���X
/// </summary>
class BaseScene
{
private: // �����o�ϐ�
	// �V�[���}�l�[�W���[(�؂�Ă���)
	SceneManager* sceneManager_ = nullptr;

public: // �����o�֐�
	/// <summary>
	/// ���z�f�X�g���N�^
	/// </summary>
	virtual ~BaseScene() = default;

	/// <summary>
	/// ������
	/// </summary>
	virtual void Initialize() = 0;

	/// <summary>
	/// ���t���[���X�V
	/// </summary>
	virtual void Update(char keys[256], char oldkeys[256]) = 0;

	/// <summary>
	///  �`��
	/// </summary>
	virtual void Draw() = 0;

	/// <summary>
	///  �V�[���J��
	/// </summary>
	virtual void GameTransition() = 0;

	/// <summary>
	/// �I������
	/// </summary>
	virtual void Finalize() = 0;

	/// <summary>
	/// �V�[���}�l�[�W���[�̃Z�b�^�[
	/// </summary>
	/// <param name="sceneManager"></param>
	virtual void SetSceneManager(SceneManager* sceneManager) { sceneManager_ = sceneManager; }
};