#pragma once
#include "Entity.h"
#include <iostream>
class Enemy : public Entity
{
public:
	Enemy();
	~Enemy();
	void DisplayEnemy();
};