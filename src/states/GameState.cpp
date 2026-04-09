#include "GameState.hpp"
#include "../core/Game.hpp"

GameState::GameState(Game& game) : State(game), snake(20, 13, 64) {}

void GameState::handleEvent(sf::Event& event) {
    snake.handleEvent(event);
}

void GameState::update(float dt) {
    snake.update(dt);
}

void GameState::render(sf::RenderWindow& window) {
    snake.draw(window);
}