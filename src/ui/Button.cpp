#include "Button.hpp"

Button::Button(const sf::Vector2f& size, const sf::Font& font, const std::string& str) {
    shape.setSize(size);
    shape.setFillColor(sf::Color::White);

    text.setFont(font);
    text.setString(str);
    text.setFillColor(sf::Color::Black);

    // dxa o texto no centro, talvez seja interessante criar um enum de alinhamentos na caixa para o texto...
    sf::FloatRect bounds = text.getLocalBounds();
    text.setOrigin(
        bounds.left + bounds.width / 2.f,
        bounds.top + bounds.height / 2.f
    );
}

void Button::setBgColor(sf::Color color) {
    bgColor = color;
}

void Button::setHoverColor(sf::Color color) {
    hoverColor = color;
}

void Button::setPosition(float x, float y) {
    shape.setPosition(x, y);

    // centraliza dnv
    text.setPosition(
        x + shape.getSize().x / 2.f,
        y + shape.getSize().y / 2.f
    );
}

bool Button::isHovered(const sf::Vector2i& mousePos) const {
    return shape.getGlobalBounds().contains(
        static_cast<float>(mousePos.x),
        static_cast<float>(mousePos.y)
    );
}

void Button::update(const sf::Vector2i& mousePos) {
    if (isHovered(mousePos)) {
        shape.setFillColor(hoverColor);
    } else {
        shape.setFillColor(bgColor);
    }
}

void Button::draw(sf::RenderWindow& window) {
    window.draw(shape);
    window.draw(text);
}