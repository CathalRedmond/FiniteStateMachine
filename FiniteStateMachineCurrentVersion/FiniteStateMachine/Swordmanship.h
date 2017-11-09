/// <summary>
/// @author Cathal Redmond
/// </summary>

#ifndef SWORDMANSHIP_H
#define SWORDMANSHIP_H

#include "State.h"

/// <summary>
/// swordmanship (swording) state class used in the finite state machine
/// base of state class
/// </summary>
class Swordmanship : public State
{
public:
	Swordmanship();
	~Swordmanship();
	void idling(Animation * a);
};

#endif // !SWORDMANSHIP_H


