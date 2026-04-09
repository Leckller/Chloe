#pragma once
#include <SFML/Graphics.hpp>

class Button {
private:
    sf::RectangleShape shape;
    sf::Text text;

public:
    Button() {};
    Button(const sf::Vector2f& size, const sf::Font& font, const std::string& str);

    void setPosition(float x, float y);

    bool isClicked(const sf::Vector2i& mousePos) const;

    void draw(sf::RenderWindow& window);
};