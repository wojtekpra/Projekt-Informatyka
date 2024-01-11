#include "Pomoc.hpp"

Pomoc::Pomoc()
{
    obraz.loadFromFile("pomoc.PNG");
    okno.setSize(sf::Vector2f(600, 600));
    okno.setTexture(&obraz);
}

sf::RectangleShape Pomoc::GetPomoc() const {
    return okno;
}

