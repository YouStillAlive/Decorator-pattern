#pragma once
#include "Decorator.h"

class Rider : public Decorator
{
public:
	Rider(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Rider!\n";
	}

	int Attack() override
	{
		return p->Attack() - 10;
	}

	int Move() override
	{
		return p->Move() + 40;
	}

	int HP() override
	{
		return p->HP() + 200;
	}

	int Shield() override
	{
		return p->Shield() + 100;
	}
};