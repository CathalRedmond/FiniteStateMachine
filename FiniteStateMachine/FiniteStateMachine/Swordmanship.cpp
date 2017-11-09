/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Swordmanship.h"



Swordmanship::Swordmanship()
{
}


Swordmanship::~Swordmanship()
{
}

/// <summary>
/// changes state from swordmanship to idle state
/// </summary>
/// <param name="a">pointer to animation class</param>
void Swordmanship::idling(Animation * a)
{
	std::cout << "Going from Swordmanship to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}