#include "GameState.hpp"
#include "../core/Game.hpp"

GameState::GameState(Game& game) : State(game) {}

void GameState::handleEvent(sf::Event& event) {}

void GameState::update(float dt) {}

void GameState::render(sf::RenderWindow& window) {
}