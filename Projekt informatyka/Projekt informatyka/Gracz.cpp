#include "Gracz.hpp"
#include "Enemy.hpp"
#include "Interfejs.hpp"
#include <iostream>
#include <sstream> 

Gracz::Gracz(float x, float y) {
    position.x = x;
    position.y = y;
    ludzik.setPosition(position);
    texture.loadFromFile("Gracz.PNG");
    ludzik.setTexture(texture);
}

sf::Sprite Gracz::getGracz() const {
    return ludzik;
}

void Gracz::ruch(float x, float y, const std::vector<sf::Vector2f>& sciany, Enemy& enemy1, Enemy& enemy2, Enemy& enemy3, Enemy& enemy4, Enemy& enemy5, Enemy& enemy6, Interfejs& interfejs, int& punkty) {
    std::stringstream ss;
    if (clock.getElapsedTime().asSeconds() > 0.5) {
        position.x = position.x + x*55; //(30, 60) 55x, 51 y
        position.y = position.y + y*51;
        for (const auto& vector : sciany)
        {
            if (position == vector) {
                position.x = position.x - x*55;
                position.y = position.y - y*51;
            }
            else if (position.x <= 0 || position.x >= 580) {
                position.x = position.x - x * 55;
                position.y = position.y - y * 51;
            }
            else if (position.y <= 10 || position.y >= 520) {
                position.x = position.x - x * 55;
                position.y = position.y - y * 51;
            }
        }

        ludzik.setPosition(position);
        enemy1.ruch();
        enemy2.ruch();
        enemy3.ruch();
        enemy4.ruch();
        enemy5.ruch();
        enemy6.ruch();
        //ruch2.push_back(sf::Vector2f(85, 213));
        punkty++;
        ss.str("");
        ss << "Ruchy: " << punkty;
        interfejs.setTextRuch((ss.str()));
       // std::cout <<  position.x << ", " << position.y << std::endl;
        
        clock.restart();
    }
}
