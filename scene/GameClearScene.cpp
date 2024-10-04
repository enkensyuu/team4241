#include "GameClearScene.h"
#include "SceneManager.h"

void GameClearScene::Initialize()
{
}

void GameClearScene::Finalize()
{
}

void GameClearScene::Update(char keys[256], char oldkeys[256])
{
	// シーン切り替え
	if (keys[KEY_INPUT_SPACE] && !oldkeys[KEY_INPUT_SPACE])
	{
		// ゲームプレイシーンへ
		SceneManager::GetInstance()->ChangeScene("TITLE");
		return;
	}

}

void GameClearScene::GameTransition()
{
}

void GameClearScene::Draw()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Clear");
	DrawFormatString(0, 20, GetColor(255, 255, 255), "Space to Title Scene");
}