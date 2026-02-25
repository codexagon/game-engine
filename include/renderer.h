#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>

class Renderer {
	public:
		sf::RenderWindow window;
		void initializeWindow(const sf::Vector2u& windowSize);
		void drawCircle(float r);
		void drawRect(const sf::Vector2f& dimensions);
		void clearWindow();
		void display();
};

#endif
