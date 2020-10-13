#pragma once
#include "Decorator.h"

class Elf_Warrior : public Decorator
{
public:
	Elf_Warrior(Race *ptr) : Decorator(ptr)
	{
	}

	void HeroName() override
	{
		std::cout << "Elf Warrior!\n";
	}

	int Attack() override
	{
		return p->Attack() + 20;
	}

	int Move() override
	{
		return p->Move() - 10;
	}

	int HP() override
	{
		return p->HP() + 100;
	}

	int Shield() override
	{
		return p->Shield() + 20;
	}
};