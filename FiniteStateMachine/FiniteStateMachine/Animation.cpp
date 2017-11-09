/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Animation.h"



Animation::Animation()
{
	current = new Idle();
}


Animation::~Animation()
{
}

/// <summary>
/// sets current state of the finite state machine
/// </summary>
/// <param name="s"></param>
void Animation::setCurrent(State * s)
{
	current = s;
}

// functions below ,as far as walking, calls the state that is next
void Animation::idling()
{
	current->idling(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::shovelling()
{
	current->shovelling(this);
}

void Animation::swordmanship()
{
	current->swordmanship(this);
}

void Animation::walking()
{
	current->walking(this);
}