#pragma once
#include "SFML/Graphics.hpp"
class Paddle : public sf::Drawable
{
private:

public:
	Paddle();
	Paddle(sf::Texture * t_in);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const; //
	sf::Sprite sprite;
};

