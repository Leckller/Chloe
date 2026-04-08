#pragma once
#include "../core/State.hpp"

class MenuState : public State {
public:
    MenuState(Game& game);

    void handleEvent(sf::Event& event) override;
    void update(float dt) override;
    void render(sf::RenderWindow& window) override;
};