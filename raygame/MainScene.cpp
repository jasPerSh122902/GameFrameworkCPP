#include "MainScene.h"
#include "Sprite.h"
#include "Movement.h"
#include "Transform2D.h"
#include "Input.h"
#include "Player.h"

void MainScene::start()
{
	Player* player = new Player(250,300,"Player");
	player->getTransform()->setScale({ 350,350 });
	addActor(player);
}
