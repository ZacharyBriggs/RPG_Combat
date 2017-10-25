#pragma once
#include "Entity.h"
class Player : public Entity
{
private:
	int mLevel;
	int mExpNxtLvl;
public:
	int mExp;
	int mGold;
	Player();
	~Player();
	void LevelUp();
};