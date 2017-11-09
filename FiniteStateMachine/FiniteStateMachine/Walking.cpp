/// <summary>
/// @author Cathal Redmond
/// </summary>

#include "Walking.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

/// <summary>
/// changes from walking state to idle state
/// </summary>
/// <param name="a">pointer to the animation class</param>
void Walking::idling(Animation * a)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}