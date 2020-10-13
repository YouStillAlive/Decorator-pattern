#pragma once
#include "Decorator.h"

class Swordsman : public Decorator
{
public:
	Swordsman(Race *ptr) : Decorator(ptr)
	{
	}
	void HeroName() override
	{
		std::cout << "Swordsman!\n";
	}

	int Attack() override
	{
		return p->Attack() +40;
	}

	int Move() override
	{
		return p->Move() - 10;
	}

	int HP() override
	{
		return p->HP() + 50;
	}

	int Shield() override
	{
		return p->Shield() + 40;
	}
};