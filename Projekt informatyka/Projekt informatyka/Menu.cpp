#include "Menu.hpp"

Menu::Menu()
{
    obraz.loadFromFile("menu.PNG");
    okno.setSize(sf::Vector2f(600, 600));
    okno.setTexture(&obraz);
}

sf::RectangleShape Menu::GetMenu() const {
    return okno;
}

