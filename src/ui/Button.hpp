#pragma once
#include <SFML/Graphics.hpp>

class Button {
private:
    sf::RectangleShape shape;
    sf::Text text;

    sf::Color bgColor = sf::Color::White;
    sf::Color hoverColor = sf::Color::Yellow;

public:
    Button() {};
    Button(const sf::Vector2f& size, const sf::Font& font, const std::string& str);

    void setPosition(float x, float y);

    bool isHovered(const sf::Vector2i& mousePos) const;

    void setBgColor(sf::Color color);
    void setHoverColor(sf::Color color);

    void update(const sf::Vector2i& mousePos);
    void draw(sf::RenderWindow& window);
};