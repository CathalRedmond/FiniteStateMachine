/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "State.h"

State::State()
{
}

State::~State()
{
}

void State::idling(Animation * a)
{
	std::cout << "State:Idling" << std::endl;
}

void State::hammering(Animation * a)
{
	std::cout << "State::Hammmering" << std::endl;
}

void State::jumping(Animation * a)
{
	std::cout << "State::Jumping" << std::endl;
}

void State::shovelling(Animation * a)
{
	std::cout << "State::Shovelling" << std::endl;
}

void State::swordmanship(Animation * a)
{
	std::cout << "State::Swordmanship" << std::endl;
}

void State::walking(Animation * a)
{
	std::cout << "State::Walking" << std::endl;
}