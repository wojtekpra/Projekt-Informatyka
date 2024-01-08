#include "Moneta.hpp"
#include <iostream>
#include <time.h>
#include <vector>

Moneta::Moneta(std::vector<sf::Vector2f>& sciany) {
	texture.loadFromFile("kosc.PNG");
	losujpozycje(sciany);
	moneta.setTexture(texture);

}

sf::Sprite Moneta::getMoneta() const {
	return moneta;
}

void Moneta::losujpozycje(std::vector<sf::Vector2f>& sciany) {
	srand(time(NULL));
	
	while (1 > 0) {
		bool pom = true;
		float a = (rand() % 10);
		float b = (rand() % 10);
		//std::cout << a << " " << b << std::endl;
		for (auto& sciana : sciany) {
			if ((sciana.x - 30) / 55 == a && (sciana.y - 60) / 51 == b) {
				pom = false;
				break;
			}

			
			

		}
		if (pom){
			moneta.setPosition(25 + (a * 55), 55 + (b * 51));
			//std::cout << 25 + (a * 55) << " " << 50 + (b * 51) << std::endl;
			
			break;
		}
		
		
	}
	
}