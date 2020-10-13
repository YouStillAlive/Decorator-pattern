#pragma once
#include "Decorator.h"

class Warrior : public Decorator
{
public:
	Warrior(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Warrior!\n";
	}

	int Attack() override
	{
		return p->Attack() + 20;
	}

	int Move() override
	{
		return p->Move() + 10;
	}

	int HP() override
	{
		return p->HP() + 50;
	}

	int Shield() override
	{
		return p->Shield() + 20;
	}
};