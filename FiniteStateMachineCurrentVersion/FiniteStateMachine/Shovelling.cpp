/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Shovelling.h"



Shovelling::Shovelling()
{
}


Shovelling::~Shovelling()
{
}
/// <summary>
/// changes from shovelling state to idle state
/// </summary>
/// <param name="a">pointer to animation class</param>
void Shovelling::idling(Animation * a)
{
	std::cout << "Going form shovelling to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
