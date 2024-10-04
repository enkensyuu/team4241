#include "GamePlayScene.h"
#include "SceneManager.h"

void GamePlayScene::Initialize()
{
	isClear = false;
}

void GamePlayScene::Finalize()
{

}

void GamePlayScene::Update(char keys[256], char oldkeys[256])
{

	if (keys[KEY_INPUT_ESCAPE] == true && oldkeys[KEY_INPUT_ESCAPE] == false) {
		SceneManager::GetInstance()->ChangeScene("SELECT");
		return;
	}
	if (keys[KEY_INPUT_SPACE] == true && oldkeys[KEY_INPUT_SPACE] == false)

	{
		isClear = true;
	}

	if (isClear) {

		SceneManager::GetInstance()->ChangeScene("CLEAR");
		return;
	}
}

void GamePlayScene::GameTransition()
{
}

void GamePlayScene::Draw()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Play");
	DrawFormatString(0, 20, GetColor(255, 255, 255), "Space to Clear Scene");
}

