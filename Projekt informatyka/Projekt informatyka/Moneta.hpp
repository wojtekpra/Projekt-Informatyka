#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class Moneta {
private:
    sf::Sprite moneta;
    sf::Texture texture;
    sf::Vector2f* position;
public:
    Moneta(std::vector<sf::Vector2f>& sciany);
    void losujpozycje(std::vector<sf::Vector2f>& sciany);
    sf::Sprite getMoneta() const;
};