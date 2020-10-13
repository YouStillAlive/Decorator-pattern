#pragma once
#include <iostream>

class Race abstract
{
//protected:
	//std::string HeroName;
public:
	virtual void HeroName() abstract;
	virtual int Attack() abstract;
	virtual int Move() abstract;
	virtual int HP() abstract;
	virtual int Shield() abstract;
};