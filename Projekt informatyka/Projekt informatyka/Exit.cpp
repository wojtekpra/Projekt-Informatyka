#include "Exit.hpp"

Exit::Exit()
{
    obraz.loadFromFile("wyj�cie.PNG");
    okno.setSize(sf::Vector2f(600, 600));
    okno.setTexture(&obraz);
}

sf::RectangleShape Exit::GetExit() const {
    return okno;
}

