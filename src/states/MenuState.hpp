#pragma once
#include "../core/State.hpp"
#include "../ui/Button.hpp"

class MenuState : public State {
private:
    Button startButton;
    sf::Font font;

public:
    MenuState(Game& game);

    void handleEvent(sf::Event& event) override;
    void update(float dt) override;
    void render(sf::RenderWindow& window) override;
};