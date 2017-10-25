#pragma once
#include "Entity.h"
#include <iostream>
class Enemy : public Entity
{
protected:
	int mExpDrop;
	int mGoldDrop;
public:
	Enemy();
	~Enemy();
	int GetExp();
	int GetGoldAmount();
};