/// <summary>
/// @author Cathal Redmond
/// </summary>


#ifndef STATE_H
#define STATE_H


#include <iostream>

//forward referencin gof animation class
class Animation;


/// <summary>
/// class that controls the current state of the finite state machine
/// </summary>
class State
{
public:
	
	State();
	~State();

	virtual void idling(Animation * a);
	virtual void hammering(Animation * a);
	virtual void jumping(Animation * a);
	virtual void shovelling(Animation * a);
	virtual void swordmanship(Animation * a);
	virtual void walking(Animation * a);
};

#include "Animation.h"


#endif // !STATE_H
