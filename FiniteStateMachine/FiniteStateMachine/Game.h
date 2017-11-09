/// <summary>
/// @author Cathal Redmond
/// </summary>


#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>
#include "Animation.h"
#include <chrono>
#include <thread>

/// <summary>
/// enum class for the different states the finite state machine can be in
/// </summary>
enum class CurrentState{HAMMERING,
						IDLING,
						JUMPING,
						SHOVELLING,
						SWORDMANSHIP,
						WALKING};


/// <summary>
/// @brief Game class that handles the animation(text and square) that 
/// are shown on the screen when the current states and animation is changed.
/// Also is the class that deals with the render window
/// </summary>
class Game
{
public:
	/// <summary>
	/// @brief basic constructor for the game class
	/// </summary>
	Game();
	/// <summary>
	/// @brief function that the main game loop is in
	/// </summary>
	void run();
private:
	/// <summary>
	/// @brief function that deals with what happens each update
	/// </summary>
	void update();
	/// <summary>
	/// @brief function that handles and process input
	/// </summary>
	void processEvents();
	/// <summary>
	/// @brief function that render sprites , text etc. onto the screen
	/// </summary>
	void render();

	/// <summary>
	/// @brief function that intializes the fonts and text for the program
	/// </summary>
	void setUpText();

	/// <summary>
	/// @brief function that updates the text and square every time new state occurs
	/// </summary>
	void updateTextAndSquares();

	/// <summary>
	/// @brief takes input from keyboard and switches states
	/// </summary>
	void handleInput(sf::Event event);

	// main window for the program
	sf::RenderWindow m_window;

	// instance of animation class
	Animation finiteStateMachine;

	// text shown on screen , saying what state the fsm is in
	sf::Text m_currentStateText;
	// font for text
	sf::Font m_font;

	//instance of current state enum class 
	// set to idle intially
	CurrentState m_state = CurrentState::IDLING;
	// rectangel shape used for demostration of different classes 
	sf::RectangleShape m_animationSquare;

};

#endif //!Game_H