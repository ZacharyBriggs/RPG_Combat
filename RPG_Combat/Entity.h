#pragma once
class Entity
{
private:
	int mHealth;
	int mArmor;
	int mDamage;
	char* mName;
public:
	Entity();
	~Entity();
	void Attack();
	void Defend();
};
