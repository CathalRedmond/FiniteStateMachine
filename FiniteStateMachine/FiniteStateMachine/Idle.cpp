/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Idle.h"



Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::hammering(Animation * a)
{
	std::cout << "Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::jumping(Animation * a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::shovelling(Animation * a)
{
	std::cout << "Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Idle::swordmanship(Animation * a)
{
	std::cout << "Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::idling(Animation * a)
{
	std::cout << "idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}