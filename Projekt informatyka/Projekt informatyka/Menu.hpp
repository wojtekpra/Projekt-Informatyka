#pragma once

#include <SFML/Graphics.hpp>


class Menu {
private:
    sf::Texture obraz;
    sf::RectangleShape okno;
public:
    Menu();
    sf::RectangleShape GetMenu() const;
    
};