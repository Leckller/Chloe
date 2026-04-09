#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Entity.hpp"

class Snake : public Entity {
private:
    std::vector<sf::Vector2i> body;
    int direction;

    int cols;
    int lines;
    int size;

    float timer;
    float delay;

    sf::Texture texture;
    sf::Sprite sprite;

public:
    Snake(int cols, int lines, int size);

    void handleEvent(const sf::Event& event);
    void update(float dt) override;
    void draw(sf::RenderWindow& window) override;
};