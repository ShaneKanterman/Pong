#include "SFML/Graphics.hpp"
#include "Paddle.h"


int main()
{
	sf::Texture t_BluePaddle;
	t_BluePaddle.loadFromFile("BluePaddle.png");

	sf::Vector2i res(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height);
	sf::RenderWindow window(sf::VideoMode(res.x, res.y, 32), "SFML Window", sf::Style::Fullscreen);

	/*
	Create paddles and put in starting position
	*/
	Paddle blue(&t_BluePaddle);
	blue.sprite.setPosition(sf::Vector2f(0, res.y / 2-100));
	
	Paddle red(&t_BluePaddle);
	red.sprite.setPosition(sf::Vector2f(res.x - 50, res.y/2-100));

	float speed = 0.1f;

	while (window.isOpen())
	{
		window.clear(sf::Color::Black);

		/*
		Handle input
		*/
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			red.sprite.move(sf::Vector2f(0,-speed));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			red.sprite.move(sf::Vector2f(0, speed));
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			blue.sprite.move(sf::Vector2f(0, -speed));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			blue.sprite.move(sf::Vector2f(0, speed));
		}

		
		/*
		Draw items
		*/
		window.draw(blue);
		window.draw(red);


		window.display();
	}

	return 0;
}