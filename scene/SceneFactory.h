#pragma once
#include "AbstractSceneFactory.h"

/// <summary>
/// ���̃Q�[���p�̃V�[���H��
/// </summary>
class SceneFactory : public AbstractSceneFactory
{
public: // �����o�֐�
	/// <summary>
	/// �V�[������
	/// </summary>
	/// <param name="sceneName">�V�[����</param>
	/// <returns>���������V�[��</returns>
	BaseScene* CreateScene(const std::string& sceneName) override;
};