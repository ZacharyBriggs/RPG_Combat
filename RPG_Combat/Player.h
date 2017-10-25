#pragma once
#include "Entity.h"
class Player : public Entity
{
private:
	int mLevel;
	int mExpNeeded;
public:
	Player();
	~Player();
};