#pragma once
#include "Decorator.h"

class Bad_Magic : public Decorator
{
public:
	Bad_Magic(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Bad Magic!\n";
	}

	int Attack() override
	{
		return p->Attack() + 70;
	}

	int Move() override
	{
		return p->Move() + 20;
	}

	int HP() override
	{
		return p->HP() + 0;
	}

	int Shield() override
	{
		return p->Shield() + 0;
	}
};