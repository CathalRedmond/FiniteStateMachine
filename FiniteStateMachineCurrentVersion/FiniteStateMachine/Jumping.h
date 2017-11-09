/// <summary>
/// @author Cathal Redmond
/// </summary>

#ifndef JUMPING_H
#define JUMPING_H

#include "State.h"

/// <summary>
/// jumping state class used in the finite state machine
/// base of state class
/// </summary>
class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idling(Animation * a);
};

#endif // !JUMPING_H