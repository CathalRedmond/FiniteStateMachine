/// <summary>
/// @author Cathal Redmond
/// </summary>

#ifndef SHOVELLING_H
#define SHOVELLING_H

#include "State.h"

/// <summary>
/// shovelling state class used in the finite state machine
/// base of state class
/// </summary>
class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();
	void idling(Animation * a);
};

#endif // !SHOVELLING_H

