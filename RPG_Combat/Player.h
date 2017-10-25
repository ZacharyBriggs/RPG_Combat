#pragma once
#include "Entity.h"
class Player : public Entity
{
private:
	int mLevel;
	int mExpNxtLvl;
public:
	int mExp;
	Player();
	~Player();
	void LevelUp();
};