#include "Player.h"
#include <iostream>
Player::Player()
{
	mHealth = 25;
	mDamage = 5;
	mArmor = 1;
	mLevel = 1;
	mExp = 0;
	mExpNxtLvl = 10;
	mName = "Adventurer";
}
Player::~Player()
{
}
void Player::LevelUp()
{
	if (mExp >= mExpNxtLvl)
	{
		std::cout << "Level Up!";
		mLevel++;
		mHealth++;
		mDamage++;
		mExpNxtLvl =(mExpNxtLvl*2)+(mExpNxtLvl/2);
	}
}