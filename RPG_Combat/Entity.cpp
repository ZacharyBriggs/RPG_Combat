#include "Entity.h"
Entity::Entity()
{
	mHealth = 100;
	mDamage = 25;
	mArmor = 5;
	mName = "Default";
}
Entity::~Entity()
{
}
void Entity::Attack(Entity* defender)
{
	int newDamage = mDamage - defender->mArmor;
	defender->mHealth -= newDamage;
}
void Entity::Defend(int* damage)
{
}
int Entity::GetHP()
{
	return mHealth;
}
int Entity::GetAtk()
{
	return mDamage;
}
int Entity::GetArmor()
{
	return mArmor;
}