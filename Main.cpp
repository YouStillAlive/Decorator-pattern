#include "Archer.h"
#include "Arbalester.h"
#include "Bad_Magic.h"
#include "Elf.h"
#include "Elf_Warrior.h"
#include "Good_Magic.h"
#include "Human.h"
#include "Magic.h"
#include "Rider.h"
#include "Swordsman.h"
#include "Warrior.h"

void client(Race *p)
{
	std::cout << "Hero Name - \t ";
	p->HeroName();
	std::cout << "Characteristics: Move - " << p->Move() 
		<< "\n\t\t HP - " << p->HP() 
		<< "\n\t\t Attack - " << p->Attack() 
		<< "\n\t\t Shield - " << p->Shield() 
		<< std::endl << std::endl;
}

int main()
{
	Race *p = new Human();
	client(p);
	p = new Warrior(p);
	client(p);
	p = new Swordsman(p);
	client(p);
	p = new Rider(p);
	client(p);
	delete p;

	p = new Human();
	p = new Warrior(p);
	p = new Archer(p);
	client(p);
	delete p;

	p = new Elf();
	client(p);
	p = new Elf_Warrior(p);
	client(p);
	p = new Arbalester(p);
	client(p);
	delete p;

	p = new Elf();
	p = new Magic(p);
	client(p);
	p = new Good_Magic(p);
	client(p);
	delete p;

	p = new Elf();
	p = new Magic(p);
	p = new Bad_Magic(p);
	client(p);
	delete p;
}