#include "Interfejs.hpp"

Interfejs::Interfejs(sf::Vector2f dimensions, sf::RenderWindow* window) : dimensions(dimensions) {
    this->window = window;
    init();
}

Interfejs::~Interfejs() {
    
    delete punkty;
    delete font;
    
}

void Interfejs::draw() {
    
    window->draw(*punkty);
    window->draw(*ruchy);
}

void Interfejs::setTextPunkty(const std::string& text) {
    punkty->setString(text);
}

void Interfejs::setTextRuch(const std::string& text) {
    ruchy->setString(text);
}

void Interfejs::init() {
    font = new sf::Font;
    font->loadFromFile("arial.ttf");
    punkty = new sf::Text;
    ruchy = new sf::Text;


    punkty->setFont(*font);
    punkty->setCharacterSize(28);
    punkty->setPosition(10, 5);
    punkty->setFillColor(sf::Color::Cyan);
    punkty->setString("Punkty: 0");

    ruchy->setFont(*font);
    ruchy->setCharacterSize(28);
    ruchy->setPosition(450, 5);
    ruchy->setFillColor(sf::Color::Cyan);
    ruchy->setString("Ruchy: 0");

    
}
