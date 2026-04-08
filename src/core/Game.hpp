#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "State.hpp"

class Game {
private:
    sf::RenderWindow window;
    std::unique_ptr<State> currentState;

public:
    Game();

    void run();
    void changeState(std::unique_ptr<State> newState);

    sf::RenderWindow& getWindow();
};