#pragma once
#include "Race.h"

class Elf :public Race
{
public:
	void HeroName() override
	{
		std::cout << "Elf!\n";
	}

	int Attack() override
	{
		return 15;
	}

	int Move() override
	{
		return 30;
	}

	int HP() override
	{
		return 100;
	}

	int Shield() override
	{
		return 0;
	}
};