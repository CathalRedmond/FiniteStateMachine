/// <summary>
/// @author Cathal Redmond
/// </summary>

#ifndef WALKING_H
#define WALKING_H	

#include "State.h"


/// <summary>
/// walking state class used in the finite state machine
/// base of state class
/// </summary>
class Walking : public State
{
public:
	Walking();
	~Walking();
	void idling(Animation * a);
};
#endif // !WALKING_H

