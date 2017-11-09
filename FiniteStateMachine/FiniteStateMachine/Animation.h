/// <summary>
/// @author Cathal Redmond
/// </summary>


#ifndef ANIMATION_H
#define ANIMATION_H

/// <summary>
/// class that allows for the changing between the 
/// different state in the finite state machine
/// </summary>
class Animation
{
public:
	// pointer to state class + forward reference 
	class State* current;
	Animation();
	~Animation();

	void setCurrent(State * s);
	void idling();
	void hammering();
	void jumping();
	void shovelling();
	void swordmanship();
	void walking();
	
};

#include "Idle.h"


#endif // !ANIMATION_H

