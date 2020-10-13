#pragma once
#include "Race.h"

class Human : public Race
{
public:
	void HeroName() override
	{
		std::cout << "Human!\n";
	}

	int Attack() override
	{
		return 20;
	}
	
	int Move() override
	{
		return 20;
	}

	int HP() override
	{
		return 150;
	}

	int Shield() override
	{
		return 0;
	}
};