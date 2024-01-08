#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(float x, float y, int tekstura, const std::vector<sf::Vector2f> &Ruch) {
    position.x = x;
    position.y = y;
    this->Ruch = Ruch;
    szlam.setPosition(position);
    if (tekstura == 1) {
        texture.loadFromFile("Wr�g1.PNG");
    }
    else if (tekstura == 2) {
        texture.loadFromFile("Wr�g2.PNG");
    }
    else if (tekstura == 3) {
        texture.loadFromFile("Wr�g3.PNG");
    }
    else if (tekstura == 4) {
        texture.loadFromFile("Wr�g4.PNG");
    }
    else if (tekstura == 5) {
        texture.loadFromFile("Wr�g5.PNG");
    }
    else if (tekstura == 6) {
        texture.loadFromFile("Wr�g6.PNG");
    }
    
    szlam.setTexture(texture);
}

sf::Sprite Enemy::getEnemy() const {
    return szlam;
}

void Enemy::ruch() {
    int iteracja = 0;
    sf::Vector2f pom = szlam.getPosition();
    for (const auto& lokalizacja : Ruch) {
        if (lokalizacja == pom) {
            if (iteracja + 1 >= Ruch.size()) {
                position = Ruch[0];
                
            }
            else {
                position = (Ruch[iteracja + 1]);
            }
            szlam.setPosition(position);
            break;
        }
        
        iteracja = iteracja + 1;
     }
    
   // std::cout << "Wr�g: " << position.x << " " << position.y << std::endl;
          
}
