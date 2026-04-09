#pragma once
#include "../core/State.hpp"
#include "../entities/Snake.hpp"

class GameState : public State
{
private:
    Snake snake;

public:
    GameState(Game &game);

    void handleEvent(sf::Event &event) override;
    void update(float dt) override;
    void render(sf::RenderWindow &window) override;
};