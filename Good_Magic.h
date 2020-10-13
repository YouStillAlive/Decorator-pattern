#pragma once
#include "Decorator.h"

class Good_Magic : public Decorator
{
public:
	Good_Magic(Race *ptr) : Decorator(ptr)
	{
	}
	void HeroName() override
	{
		std::cout << "Good Magic!\n";
	}

	int Attack() override
	{
		return p->Attack() + 50;
	}

	int Move() override
	{
		return p->Move() + 30;
	}

	int HP() override
	{
		return p->HP() + 100;
	}

	int Shield() override
	{
		return p->Shield() + 30;
	}
};