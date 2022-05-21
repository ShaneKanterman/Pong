#include "Paddle.h"

Paddle::Paddle()
{

}

Paddle::Paddle(sf::Texture * t_in)
{
	sprite.setTexture(*t_in);
}

void Paddle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
