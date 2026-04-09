#include "Game.hpp"
#include "../states/MenuState.hpp"

Game::Game() : window(sf::VideoMode(20 * 64, 13 * 64), "Template") {
    changeState(std::make_unique<MenuState>(*this));
}

void Game::changeState(std::unique_ptr<State> newState) {
    currentState = std::move(newState);
}

sf::RenderWindow& Game::getWindow() {
    return window;
}

// loop principal
void Game::run() {
    sf::Clock clock;

    while (window.isOpen()) {
        float dt = clock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            currentState->handleEvent(event);
        }

        currentState->update(dt);

        window.clear();
        currentState->render(window);
        window.display();
    }
}