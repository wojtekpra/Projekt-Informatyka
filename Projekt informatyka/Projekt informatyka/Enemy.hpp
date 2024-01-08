#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class Enemy {
private:
    sf::Sprite szlam;
    sf::Texture texture;
    sf::Vector2f position;
    sf::Clock clock;
    std::vector<sf::Vector2f> Ruch;
    


public:
    Enemy(float x, float y, int tekstura, const std::vector<sf::Vector2f>&Ruch);
    sf::Sprite getEnemy() const;
    void ruch();
};
