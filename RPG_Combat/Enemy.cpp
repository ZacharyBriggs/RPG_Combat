#include "Enemy.h"
Enemy::Enemy()
{
	mHealth = 10;
	mDamage = 2;
	mArmor = 0;
	mName = "Void";
	mExpDrop = 1;
	mGoldDrop = 1;
}
Enemy::~Enemy()
{
}
int Enemy::GetExp()
{
	return mExpDrop;
}
int Enemy::GetGoldAmount()
{
	return mGoldDrop;
}