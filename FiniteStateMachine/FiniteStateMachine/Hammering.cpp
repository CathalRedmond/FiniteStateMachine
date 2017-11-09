/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

/// <summary>
/// chnages from hammering state to idle state
/// </summary>
/// <param name="a">pointer to animation class</param>
void Hammering::idling(Animation * a)
{
	std::cout << "Going from Hammering to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
