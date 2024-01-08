#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Interfejs {
protected:
    sf::Vector2f dimensions;
    sf::Text* punkty;
    sf::Text* ruchy;
    sf::Font* font;
    sf::RenderWindow* window;
    


    void init();

public:
    Interfejs(sf::Vector2f dimensions, sf::RenderWindow* window);
    ~Interfejs();
    void setTextPunkty(const std::string& text);
    void setTextRuch(const std::string& text);
    void draw();
    
};
