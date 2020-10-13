#pragma once
#include "Decorator.h"

class Arbalester : public Decorator
{
public:
	Arbalester(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Arbalester!\n";
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
		return p->Shield() - 10;
	}
};
