#include "GameSelectScene.h"
#include "SceneManager.h"

/// <summary>
/// 静的メンバ変数の実体
/// </summary>

void GameSelectScene::Initialize()
{

}

void GameSelectScene::Finalize()
{
}

void GameSelectScene::Update(char keys[256] , char oldkeys[256])
{
	// シーン切り替え
	if (keys[KEY_INPUT_SPACE] && !oldkeys[KEY_INPUT_SPACE])
	{
		// ゲームプレイシーンへ
		SceneManager::GetInstance()->ChangeScene("PLAY");
		return;
	}
}

void GameSelectScene::GameTransition()
{
}

void GameSelectScene::Draw()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Select");
	DrawFormatString(0, 20, GetColor(255, 255, 255), "Space to Play Scene");
}