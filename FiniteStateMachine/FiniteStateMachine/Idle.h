/// <summary>
/// @author Cathal Redmond
/// </summary>
#ifndef IDLE_H
#define IDLE_H


#include "State.h"
class Animation;
class Hammering;
class Jumping;
class Shovelling;
class Swordmanship;
class Walking;



class Idle : public State
{
public:
	Idle();
	~Idle();

	void hammering(Animation * a);
	void jumping(Animation * a);
	void shovelling(Animation * a);
	void swordmanship(Animation * a);
	void walking(Animation * a);
	void idling(Animation * a);

};
#include "Animation.h"
#include "Hammering.h"
#include "Jumping.h"
#include "Shovelling.h"
#include "Swordmanship.h"
#include "walking.h"




#endif // !IDLE_H