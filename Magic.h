#pragma once
#include "Decorator.h"

class Magic : public Decorator
{
public:
	Magic(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Magic Elf!\n";
	}

	int Attack() override
	{
		return p->Attack() + 10;
	}

	int Move() override
	{
		return p->Move() + 10;
	}

	int HP() override
	{
		return p->HP() - 50;
	}

	int Shield() override
	{
		return p->Shield() + 10;
	}
};