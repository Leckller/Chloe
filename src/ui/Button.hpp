#pragma once
#include <SFML/Graphics.hpp>

class Button {
private:
    sf::RectangleShape shape;
    sf::Text text;

    sf::Color bgColor = sf::Color(255, 255, 255);
    sf::Color hoverColor = sf::Color(200, 100, 100);

    float hoverProgress = 0.f;
    float hoverProgressSpeed = 5.f;

public:
    Button() {};
    Button(const sf::Vector2f& size, const sf::Font& font, const std::string& str);

    void setPosition(float x, float y);

    bool isHovered(const sf::Vector2i& mousePos) const;

    void setBgColor(sf::Color color);
    void setHoverColor(sf::Color color);
    sf::Color lerpColor(const sf::Color& a, const sf::Color& b, float t);

    void update(const sf::Vector2i& mousePos, float dt);
    void draw(sf::RenderWindow& window);
};