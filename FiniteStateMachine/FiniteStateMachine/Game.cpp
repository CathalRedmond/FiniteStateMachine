/// <summary>
/// @author Cathal Redmond
/// </summary>
#include "Game.h"

Game::Game()
	:
	m_window{ sf::VideoMode(800, 800), "FINITE STATE MACHINE" }
{
	setUpText();
	// initializes rectangle shape
	m_animationSquare.setSize(sf::Vector2f(100, 100));
	m_animationSquare.setOrigin(m_animationSquare.getGlobalBounds().width / 2.0 , m_animationSquare.getGlobalBounds().height / 2.0);
	m_animationSquare.setPosition(400, 400);
}


void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::seconds(0);
	sf::Time timePerFrame = sf::seconds(1.0f / 60.f);
	while (m_window.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update();
			render();
		}
		
	}
}

void Game::update()
{
	
	
	switch (m_state)
	{
	case CurrentState::HAMMERING:
		finiteStateMachine.hammering();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));	
		updateTextAndSquares();
		m_state = CurrentState::IDLING;
		break;
	case CurrentState::JUMPING:
		finiteStateMachine.jumping();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		updateTextAndSquares();
		m_state = CurrentState::IDLING; 
		break;
	case CurrentState::SHOVELLING:
		finiteStateMachine.shovelling();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		updateTextAndSquares();
		m_state = CurrentState::IDLING;
		break;
	case CurrentState::SWORDMANSHIP:
		finiteStateMachine.swordmanship();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		updateTextAndSquares();
		m_state = CurrentState::IDLING;
		break;
	case CurrentState::WALKING:
		finiteStateMachine.walking();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		updateTextAndSquares();
		m_state = CurrentState::IDLING;
		break;
	case CurrentState::IDLING:	
		finiteStateMachine.idling();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
		updateTextAndSquares();
		break;
	default:
		break;
	}
	
	
}

/// <summary>
/// processes events that occur while running
/// </summary>
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		
		if (event.type == sf::Event::KeyReleased)
		{
			handleInput(event);
		}
	}
}

/// <summary>
/// renders the window, text and rectangle square on screen
/// </summary>
void Game::render()
{
	m_window.clear();
	m_window.draw(m_currentStateText);
	m_window.draw(m_animationSquare);
	m_window.display();
}

/// <summary>
/// function that initializes the text 
/// </summary>
void Game::setUpText()
{
	if (!m_font.loadFromFile("ASSETS/FONTS/comic.ttf"))
	{
		std::cout << "Error loading font "<< std::endl;
	}
	m_currentStateText.setFont(m_font);
	m_currentStateText.setCharacterSize(64);
	m_currentStateText.setFillColor(sf::Color::Red);
	//sets origin to middle of word
	m_currentStateText.setOrigin((m_currentStateText.getLocalBounds().width) / 2, (m_currentStateText.getLocalBounds().height) / 2);
	m_currentStateText.setPosition(400,100);
	m_currentStateText.setString("TEXT");
}

/// <summary>
/// function that updates the text and square on screen
/// </summary>
void Game::updateTextAndSquares()
{
	// sets the appropiate string for the text and colour for the text and square
	// also changes rotation and/or position to help further distinguish between states
	switch (m_state)
	{
	case CurrentState::HAMMERING:
		m_currentStateText.setString("Hammering");
		m_currentStateText.setFillColor(sf::Color::Blue);
		m_animationSquare.setRotation(45);
		break;
	case CurrentState::JUMPING:
		m_currentStateText.setString("Jumping");
		m_currentStateText.setFillColor(sf::Color::Red);
		m_animationSquare.setPosition(m_animationSquare.getPosition().x, m_animationSquare.getPosition().y - 100);
		break;
	case CurrentState::SHOVELLING:
		m_currentStateText.setString("Shovelling");
		m_currentStateText.setFillColor(sf::Color::Magenta);
		m_animationSquare.setRotation(120);
		m_animationSquare.setPosition(m_animationSquare.getPosition().x, m_animationSquare.getPosition().y + 100);
		break;
	case CurrentState::SWORDMANSHIP:
		m_currentStateText.setString("Swordmanship\n(Swording)");
		m_currentStateText.setFillColor(sf::Color::Green);
		m_animationSquare.setPosition(m_animationSquare.getPosition().x + 100, m_animationSquare.getPosition().y - 100);
		break;
	case CurrentState::WALKING:
		m_currentStateText.setString("Walking");
		m_currentStateText.setFillColor(sf::Color::Yellow);
		m_animationSquare.setPosition(m_animationSquare.getPosition().x + 100, m_animationSquare.getPosition().y);
		break;
	case CurrentState::IDLING:
		m_currentStateText.setString("Idling");
		m_currentStateText.setFillColor(sf::Color::White);
		m_animationSquare.setPosition(400, 400);
		m_animationSquare.setRotation(0);
		break;
	default:
		break;
	}
	//sets square to same colour as text
	m_animationSquare.setFillColor(m_currentStateText.getFillColor());
	// update origin as string used changes size
	m_currentStateText.setOrigin((m_currentStateText.getLocalBounds().width) / 2, (m_currentStateText.getLocalBounds().height) / 2);

}

/// <summary>
/// function that handles the input for from the keyboard
/// </summary>
/// <param name="event">keyreleased event</param>
void Game::handleInput(sf::Event event)
{
	//switches enum class to current state chosen by user
	// if correct key is pressed
	// if not state is still idle
	switch (event.key.code)
	{
	case sf::Keyboard::Num1:
		m_state = CurrentState::HAMMERING;
		break;
	case sf::Keyboard::Num2:
		m_state = CurrentState::SHOVELLING;
		break;
	case sf::Keyboard::Num3:
		m_state = CurrentState::SWORDMANSHIP;
		break;
	case sf::Keyboard::Num4:
		m_state = CurrentState::WALKING;
		break;
	case sf::Keyboard::Num5:
		m_state = CurrentState::JUMPING;
		break;
	default:
		m_state = CurrentState::IDLING;
		break;
	}
}


