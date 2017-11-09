/// <summary>
/// @author Cathal Redmond
/// </summary>
#ifndef HAMMERING_H
#define HAMMERING_H


#include "State.h"

/// <summary>
/// hammering state class used in the finite state machine
/// base of state class
/// </summary>
class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idling(Animation * a);


};

#endif // !HAMMERING_H