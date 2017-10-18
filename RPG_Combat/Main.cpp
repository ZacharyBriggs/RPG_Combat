#include "Entity.h"
#include "Player.h"
#include "Enemy.h"
int main()
{
	Entity* ManA = new Entity();
	Entity* ManB = new Entity();
	Player* Adventurer = new Player();
	Enemy* Slime = new Enemy();
	ManA->GetHP();
	ManA->GetAtk();
	ManA->GetArmor();
	ManA->Attack(ManB);
	Adventurer->Attack(Slime);
	Slime->Attack(Adventurer);
}