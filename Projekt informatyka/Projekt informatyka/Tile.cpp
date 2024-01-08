#include "Tile.hpp"
#include <cstdlib>
#include <ctime>
#include<iostream>

Tile::Tile(std::vector<sf::Vector2f>& sciany){
    srand(static_cast<unsigned>(time(NULL)));  
    texture1.loadFromFile("podloga1.png");
    texture2.loadFromFile("podloga2.png");
    texture3.loadFromFile("sciana3.png");
for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
        sf::RectangleShape tile(sf::Vector2f(55, 51)); 
        tile.setPosition(25+(i * 55), 55+(j * 51)); 
        
        for (const auto& sciana : sciany) {
            pozycja = sciana;
            if ((pozycja.x-30)/55 == i && (pozycja.y-60)/51 == j) {
                tile.setTexture(&texture3);
                break;
            }
            
        }
        int textureNumber = rand() % 2;
        if ((textureNumber == 0) && (tile.getTexture()!=&texture3)) {
            tile.setTexture(&texture1);
        }
        else if (textureNumber == 1 && tile.getTexture() != &texture3){
            tile.setTexture(&texture2);
        }

        tiles.push_back(tile);
    }
}

}
void Tile::draw(sf::RenderWindow& window) {
    for (const auto& tile : tiles) {
        window.draw(tile);
    }
}