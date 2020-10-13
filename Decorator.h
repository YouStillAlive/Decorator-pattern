#pragma once
#include "Race.h"

class Decorator : public Race
{
protected:
	Race *p;
public:
	Decorator(Race *ptr)
	{
		p = ptr;
	}
};