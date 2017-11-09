/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Jumping.h"

Jumping::Jumping()
{
}


Jumping::~Jumping()
{
}

/// <summary>
/// changes from jumping state to idle state
/// </summary>
/// <param name="a">pointer to animation class</param>
void Jumping::idling(Animation * a)
{
	std::cout << "Going from jumping to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
