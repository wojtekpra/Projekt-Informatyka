#pragma once

#include <SFML/Graphics.hpp>


class Pomoc {
private:
    sf::Texture obraz;
    sf::RectangleShape okno;
public:
    Pomoc();
    sf::RectangleShape GetPomoc() const;

};