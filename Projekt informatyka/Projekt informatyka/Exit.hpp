#pragma once

#include <SFML/Graphics.hpp>


class Exit {
private:
    sf::Texture obraz;
    sf::RectangleShape okno;
public:
    Exit();
    sf::RectangleShape GetExit() const;

};