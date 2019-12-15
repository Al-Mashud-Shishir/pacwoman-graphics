#pragma once

#include <SFML/Graphics.hpp>

class Bonus : public sf::Drawable, public sf::Transformable
{
public:

	enum Fruit
	{
		Banana,
		Apple,
		Cherry
	};

public:

	Bonus (sf::Texture& texture);
	void setFruit (Fruit fruit);

private:

	sf::Sprite m_visual;

	void draw (sf::RenderTarget& target, sf::RenderStates states) const;

};