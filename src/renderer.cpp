#include "../include/renderer.h"

void Renderer::initializeWindow(const sf::Vector2u& windowSize) {
	window = sf::RenderWindow(sf::VideoMode(windowSize), "");
}

void Renderer::drawCircle(float r) {
	sf::CircleShape circle(r);
	circle.setFillColor(sf::Color::Green);
	window.draw(circle);
}

void Renderer::drawRect(const sf::Vector2f& dimensions) {
	sf::RectangleShape rect(dimensions);
	rect.setFillColor(sf::Color::Blue);
	window.draw(rect);
}

void Renderer::clearWindow() {
	window.clear();
}

void Renderer::display() {
	window.display();
}
