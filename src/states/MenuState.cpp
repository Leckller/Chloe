#include "MenuState.hpp"
#include "../core/Game.hpp"
#include "GameState.hpp"

MenuState::MenuState(Game& game) : State(game) {}

void MenuState::handleEvent(sf::Event& event) {
    // !trocar isso dpois! só um evento qualquer p trocar o state 
    if (event.type == sf::Event::MouseButtonPressed) {
        game.changeState(std::make_unique<GameState>(game));
    }
}

void MenuState::update(float dt) {}

void MenuState::render(sf::RenderWindow& window) {
}