#pragma once
class Entity
{
private:
	int mHealth;
	int mDamage;
	int mArmor;
	char* mName;
public:
	Entity();
	~Entity();
	void Attack(Entity* defender);
	void Defend(int* damage);
	int GetHP();
	int GetAtk();
	int GetArmor();
};