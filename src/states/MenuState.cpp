#include "MenuState.hpp"
#include "../core/Game.hpp"
#include "GameState.hpp"

MenuState::MenuState(Game &game) : State(game)
{
    font.loadFromFile("src/assets/fonts/arial.ttf");
    startButton = Button({200.f, 100.f}, font, "Iniciar");
    float startButtonX = game.getWindow().getSize().x / 2 - 100;
    float startButtonY = game.getWindow().getSize().y / 2 - 50;
    startButton.setPosition(startButtonX, startButtonY);
}

void MenuState::handleEvent(sf::Event &event)
{

    if (event.mouseButton.button == sf::Mouse::Left)
    {
        sf::Vector2i mousePos = sf::Mouse::getPosition(game.getWindow());

        if (startButton.isHovered(mousePos))
        {
            game.changeState(std::make_unique<GameState>(game));
        }
    }
}

void MenuState::update(float dt) {
    startButton.update(sf::Mouse::getPosition(game.getWindow()));
}

void MenuState::render(sf::RenderWindow &window)
{
    startButton.draw(window);
}