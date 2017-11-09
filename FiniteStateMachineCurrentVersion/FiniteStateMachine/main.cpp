/// <summary>
/// @ mainpage
/// @ author Cathal Redmond
/// @Version 1.0
/// @brief program that implements and demostrates  a finite state machine
/// 
/// 
/// 
/// Time Taken:
/// 07 - 11 - 2017  17:30 - 
/// 
/// Known Bugs:
/// 
/// </summary>

#include "Game.h"
#include "Animation.h"

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

/// <summary>
/// main entry point of the program
/// </summary>
/// <returns>zero</returns>
int main()
{
	Game game;
	game.run();
}