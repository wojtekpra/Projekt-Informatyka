#pragma once

#include <SFML/Graphics.hpp>

class Tile {
private:
    std::vector<sf::RectangleShape> tiles;
    sf::RectangleShape* tile;
    sf::Texture texture1;
    sf::Texture texture2;
    sf::Texture texture3;
    sf::Vector2f pozycja;

public:
    Tile(std::vector<sf::Vector2f>& sciany);
    void draw(sf::RenderWindow& window);
};