#include "GameTitleScene.h"
#include "SceneManager.h"


void GameTitleScene::Initialize()
{

}

void GameTitleScene::Finalize()
{
}

void GameTitleScene::Update(char keys[256], char oldkeys[256])
{
	// シーン切り替え
	if (keys[KEY_INPUT_SPACE] && !oldkeys[KEY_INPUT_SPACE])
	{
		// ゲームセレクトシーンへ
		SceneManager::GetInstance()->ChangeScene("SELECT");
		
		return;
	}

}

void GameTitleScene::GameTransition()
{
	
}

void GameTitleScene::Draw()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Title");
	DrawFormatString(0, 20, GetColor(255, 255, 255), "Space to Select Scene");
}


