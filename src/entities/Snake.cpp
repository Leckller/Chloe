#include "Snake.hpp"

Snake::Snake(int cols, int lines, int size)
    : cols(cols), lines(lines), size(size)
{
    direction = 0;
    timer = 0.f;
    delay = 0.1f;

    texture.loadFromFile("./src/assets/sprites/snake.png");
    sprite.setTexture(texture);

    body.push_back({5, 5});
    body.push_back({4, 5});
    body.push_back({3, 5});
}

// event-driven bbs
void Snake::handleEvent(const sf::Event& event) {
    if (event.type == sf::Event::KeyPressed) {

        if (event.key.code == sf::Keyboard::Right && direction != 1)
            direction = 0;

        if (event.key.code == sf::Keyboard::Left && direction != 0)
            direction = 1;

        if (event.key.code == sf::Keyboard::Up && direction != 3)
            direction = 2;

        if (event.key.code == sf::Keyboard::Down && direction != 2)
            direction = 3;
    }
}

void Snake::update(float dt) {
    timer += dt;

    if (timer > delay) {
        timer = 0;

        // atribui a posição da parte à frente em ordem decrescente
        for (int i = body.size() - 1; i > 0; i--) {
            body[i] = body[i - 1];
        }

        switch (direction) {
            case 0: body[0].x += 1; break;
            case 1: body[0].x -= 1; break;
            case 2: body[0].y -= 1; break;
            case 3: body[0].y += 1; break;
        }

        // colisão nas bordas
        if (body[0].x >= cols) body[0].x = 0;
        if (body[0].x < 0) body[0].x = cols - 1;

        if (body[0].y >= lines) body[0].y = 0;
        if (body[0].y < 0) body[0].y = lines - 1;
    }
}

void Snake::draw(sf::RenderWindow& window) {
    for (auto& part : body) {
        sprite.setPosition(part.x * size, part.y * size);
        window.draw(sprite);
    }
}