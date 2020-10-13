#pragma once
#include "Decorator.h"

class Archer : public Decorator
{
public:
	Archer(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Acher!\n";
	}

	int Attack() override
	{
		return p->Attack() + 20;
	}

	int Move() override
	{
		return p->Move() + 20;
	}

	int HP() override
	{
		return p->HP() + 50;
	}

	int Shield() override
	{
		return p->Shield() + 10;
	}
};