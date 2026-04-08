#pragma once
#include "../core/State.hpp"

class GameState : public State {
public:
    GameState(Game& game);

    void handleEvent(sf::Event& event) override;
    void update(float dt) override;
    void render(sf::RenderWindow& window) override;
};