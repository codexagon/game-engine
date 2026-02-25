#include <SFML/Graphics.hpp>
#include <optional>

#include "../include/engine.h"
#include "../include/renderer.h"

void Game::start(Renderer& renderer) {
	renderer.initializeWindow({800, 600});

	while (renderer.window.isOpen()) {
		while (const std::optional e = renderer.window.pollEvent()) {
			if (e->is<sf::Event::Closed>()) {
				renderer.window.close();
			}
		}
		renderer.window.clear();
		renderer.drawCircle(100);
		renderer.drawRect({50, 100});
		renderer.window.display();
	}
}
