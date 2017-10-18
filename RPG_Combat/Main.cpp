#include "Entity.h"
int main()
{
	Entity* ManA = new Entity();
	Entity* ManB = new Entity();
	ManA->GetHP();
	ManA->GetAtk();
	ManA->GetArmor();
	ManA->Attack(ManB);
}