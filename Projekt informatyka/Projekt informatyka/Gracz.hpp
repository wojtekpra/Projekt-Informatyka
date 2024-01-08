#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Enemy.hpp"
#include "Interfejs.hpp"

class Gracz {
private:
    sf::Sprite ludzik;
    sf::Texture texture;
    sf::Vector2f position;
    sf::Clock clock;

public:
    Gracz(float x, float y);
    sf::Sprite getGracz() const;
    void ruch(float x, float y, const std::vector<sf::Vector2f>& sciany, Enemy& enemy1, Enemy& enemy2, Enemy& enemy3, Enemy& enemy4, Enemy& enemy5, Enemy& enemy6, Interfejs& interfejs, int& punkty);
};
