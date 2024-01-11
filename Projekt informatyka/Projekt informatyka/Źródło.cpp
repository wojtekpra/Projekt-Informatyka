#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream> 
#include "Tile.hpp"
#include "Gracz.hpp"
#include "Interfejs.hpp"
#include "Enemy.hpp"
#include "Moneta.hpp"
#include "Menu.hpp"
#include "Pomoc.hpp"
#include "Exit.hpp"

#include <SFML/Graphics.hpp>
#include <vector>

void dodajRuchWróg1(std::vector<sf::Vector2f>& ruch1) {
    ruch1.push_back(sf::Vector2f(30, 60));
    ruch1.push_back(sf::Vector2f(85, 60));
    ruch1.push_back(sf::Vector2f(140, 60));
    ruch1.push_back(sf::Vector2f(195, 60));
    ruch1.push_back(sf::Vector2f(250, 60));
    ruch1.push_back(sf::Vector2f(305, 60));
    ruch1.push_back(sf::Vector2f(360, 60));
    ruch1.push_back(sf::Vector2f(415, 60));
    ruch1.push_back(sf::Vector2f(470, 60));
    ruch1.push_back(sf::Vector2f(525, 60));
    ruch1.push_back(sf::Vector2f(525, 111));
    ruch1.push_back(sf::Vector2f(525, 162));
    ruch1.push_back(sf::Vector2f(525, 213));
    ruch1.push_back(sf::Vector2f(525, 264));
    ruch1.push_back(sf::Vector2f(470, 264));
    ruch1.push_back(sf::Vector2f(415, 264));
    ruch1.push_back(sf::Vector2f(360, 264));
    ruch1.push_back(sf::Vector2f(305, 264));
    ruch1.push_back(sf::Vector2f(305, 213));
    ruch1.push_back(sf::Vector2f(250, 213));
    ruch1.push_back(sf::Vector2f(195, 213));
    ruch1.push_back(sf::Vector2f(140, 213));
    ruch1.push_back(sf::Vector2f(85, 213));
    ruch1.push_back(sf::Vector2f(30, 213));
    ruch1.push_back(sf::Vector2f(30, 162));
    ruch1.push_back(sf::Vector2f(30, 111));

}

void dodajRuchWróg2(std::vector<sf::Vector2f>& ruch2) {
    ruch2.push_back(sf::Vector2f(30, 213));
    ruch2.push_back(sf::Vector2f(30, 264));
    ruch2.push_back(sf::Vector2f(30, 315));
    ruch2.push_back(sf::Vector2f(85, 315));
    ruch2.push_back(sf::Vector2f(140, 315));
    ruch2.push_back(sf::Vector2f(140, 366));
    ruch2.push_back(sf::Vector2f(85, 366));
    ruch2.push_back(sf::Vector2f(30, 366));
    ruch2.push_back(sf::Vector2f(30, 417));
    ruch2.push_back(sf::Vector2f(30, 468));
    ruch2.push_back(sf::Vector2f(30, 519));
    ruch2.push_back(sf::Vector2f(85, 519));
    ruch2.push_back(sf::Vector2f(140, 519));
    ruch2.push_back(sf::Vector2f(195, 519));
    ruch2.push_back(sf::Vector2f(195, 468));
    ruch2.push_back(sf::Vector2f(195, 417));
    ruch2.push_back(sf::Vector2f(250, 417));
    ruch2.push_back(sf::Vector2f(250, 366));
    ruch2.push_back(sf::Vector2f(305, 366));
    ruch2.push_back(sf::Vector2f(305, 315));
    ruch2.push_back(sf::Vector2f(305, 264));
    ruch2.push_back(sf::Vector2f(305, 213));
    ruch2.push_back(sf::Vector2f(250, 213));
    ruch2.push_back(sf::Vector2f(195, 213));
    ruch2.push_back(sf::Vector2f(140, 213));
    ruch2.push_back(sf::Vector2f(85, 213));

}

void dodajRuchWróg3(std::vector<sf::Vector2f>& ruch3) {
    ruch3.push_back(sf::Vector2f(360, 264));
    ruch3.push_back(sf::Vector2f(360, 315));
    ruch3.push_back(sf::Vector2f(360, 366));
    ruch3.push_back(sf::Vector2f(360, 417));
    ruch3.push_back(sf::Vector2f(415, 417));
    ruch3.push_back(sf::Vector2f(415, 468));
    ruch3.push_back(sf::Vector2f(470, 468));
    ruch3.push_back(sf::Vector2f(470, 519));
    ruch3.push_back(sf::Vector2f(525, 519));
    ruch3.push_back(sf::Vector2f(525, 468));
    ruch3.push_back(sf::Vector2f(525, 417));
    ruch3.push_back(sf::Vector2f(525, 366));
    ruch3.push_back(sf::Vector2f(525, 315));
    ruch3.push_back(sf::Vector2f(470, 315));
    ruch3.push_back(sf::Vector2f(470, 264));
    ruch3.push_back(sf::Vector2f(415, 264));
    ruch3.push_back(sf::Vector2f(360, 264));
}
void dodajRuchWróg4(std::vector<sf::Vector2f>& ruch4) {
    ruch4.push_back(sf::Vector2f(305, 519));
    ruch4.push_back(sf::Vector2f(360, 519));
    ruch4.push_back(sf::Vector2f(415, 519));
    ruch4.push_back(sf::Vector2f(415, 468));
    ruch4.push_back(sf::Vector2f(415, 417));
    ruch4.push_back(sf::Vector2f(360, 417));
    ruch4.push_back(sf::Vector2f(360, 366));
    ruch4.push_back(sf::Vector2f(305, 366));
    ruch4.push_back(sf::Vector2f(250, 366));
    ruch4.push_back(sf::Vector2f(250, 417));
    ruch4.push_back(sf::Vector2f(195, 417));
    ruch4.push_back(sf::Vector2f(195, 468));
    ruch4.push_back(sf::Vector2f(195, 519));
    ruch4.push_back(sf::Vector2f(250, 519));
}

void dodajRuchWróg5(std::vector<sf::Vector2f>& ruch5) {
    ruch5.push_back(sf::Vector2f(305, 162));
    ruch5.push_back(sf::Vector2f(305, 213));
    ruch5.push_back(sf::Vector2f(305, 264));
    ruch5.push_back(sf::Vector2f(360, 264));
    ruch5.push_back(sf::Vector2f(415, 264));
    ruch5.push_back(sf::Vector2f(470, 264));
    ruch5.push_back(sf::Vector2f(525, 264));
    ruch5.push_back(sf::Vector2f(525, 213));
    ruch5.push_back(sf::Vector2f(525, 162));
    ruch5.push_back(sf::Vector2f(525, 111));
    ruch5.push_back(sf::Vector2f(525, 60));
    ruch5.push_back(sf::Vector2f(470, 60));
    ruch5.push_back(sf::Vector2f(415, 60));
    ruch5.push_back(sf::Vector2f(360, 60));
    ruch5.push_back(sf::Vector2f(360, 111));
    ruch5.push_back(sf::Vector2f(360, 162));
    ruch5.push_back(sf::Vector2f(305, 162));
}

void dodajRuchWróg6(std::vector<sf::Vector2f>& ruch6) {
    ruch6.push_back(sf::Vector2f(30, 60));
    ruch6.push_back(sf::Vector2f(30, 111));
    ruch6.push_back(sf::Vector2f(30, 162));
    ruch6.push_back(sf::Vector2f(30, 213));
    ruch6.push_back(sf::Vector2f(85, 213));
    ruch6.push_back(sf::Vector2f(140, 213));
    ruch6.push_back(sf::Vector2f(140, 162));
    ruch6.push_back(sf::Vector2f(195, 162));
    ruch6.push_back(sf::Vector2f(195, 111));
    ruch6.push_back(sf::Vector2f(250, 111));
    ruch6.push_back(sf::Vector2f(250, 60));
    ruch6.push_back(sf::Vector2f(195, 60));
    ruch6.push_back(sf::Vector2f(140, 60));
    ruch6.push_back(sf::Vector2f(85, 60));
    ruch6.push_back(sf::Vector2f(30, 60));
}

void dodajSciany(std::vector<sf::Vector2f>& sciany) {
    sciany.push_back(sf::Vector2f(85, 111));
    sciany.push_back(sf::Vector2f(140, 111));
    sciany.push_back(sf::Vector2f(305, 111));
    //sciany.push_back(sf::Vector2f(360, 111));
    sciany.push_back(sf::Vector2f(415, 111));
    sciany.push_back(sf::Vector2f(470, 111));
    sciany.push_back(sf::Vector2f(415, 162));
    sciany.push_back(sf::Vector2f(250, 162));
    sciany.push_back(sf::Vector2f(85, 162));
    sciany.push_back(sf::Vector2f(360, 213));
    sciany.push_back(sf::Vector2f(470, 213));
    sciany.push_back(sf::Vector2f(85, 264));
    sciany.push_back(sf::Vector2f(140, 264));
    sciany.push_back(sf::Vector2f(195, 264));
    sciany.push_back(sf::Vector2f(250, 264));
    sciany.push_back(sf::Vector2f(250, 315));
    sciany.push_back(sf::Vector2f(415, 315));
    sciany.push_back(sf::Vector2f(195, 366));
    sciany.push_back(sf::Vector2f(415, 366));
    sciany.push_back(sf::Vector2f(470, 366));
    sciany.push_back(sf::Vector2f(140, 417));
    sciany.push_back(sf::Vector2f(305, 417));
    sciany.push_back(sf::Vector2f(470, 417));
    sciany.push_back(sf::Vector2f(85, 468));
    sciany.push_back(sf::Vector2f(250, 468));
    sciany.push_back(sf::Vector2f(360, 468));
}


bool sprawdzKolizje(const sf::Sprite& Gracz, const sf::Sprite& wróg) {
    return Gracz.getGlobalBounds().intersects(wróg.getGlobalBounds());
}



int main()
{
    bool czymenu = true;
    bool czygra = false;
    bool czypauza = false;
    bool czyexit = false;
    int punkty = 0;
    int ruch = 0;
    std::stringstream ss;
    sf::RenderWindow window(sf::VideoMode(605, 600), "Okno");
    sf::Event event;

    std::vector<sf::Vector2f> sciany;
    dodajSciany(sciany);

    std::vector<sf::Vector2f> ruch1;
    std::vector<sf::Vector2f> ruch2;
    std::vector<sf::Vector2f> ruch3;
    std::vector<sf::Vector2f> ruch4;
    std::vector<sf::Vector2f> ruch5;
    std::vector<sf::Vector2f> ruch6;
    dodajRuchWróg1(ruch1);
    dodajRuchWróg2(ruch2);
    dodajRuchWróg3(ruch3);
    dodajRuchWróg4(ruch4);
    dodajRuchWróg5(ruch5);
    dodajRuchWróg6(ruch6);

    Gracz gracz(305, 468, 1); //30,60 to 1 kafelek, 55 w x, 51 w y
    Enemy enemy1(30, 60, 1, ruch1);
    Enemy enemy2(30, 213, 2, ruch2);
    Enemy enemy3(360, 264, 3, ruch3);
    Enemy enemy4(305, 519, 4, ruch4);
    Enemy enemy5(305, 162, 5, ruch5);
    Enemy enemy6(195, 162, 6, ruch6);
    Interfejs interfejs(sf::Vector2f(600, 600), &window);
    Tile tile(sciany);
    Menu menu;
    Pomoc pauza;
    Exit exit;
    int cobylo = 0;


    Moneta moneta(sciany);
    int skórka = 0;
    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();

            //wybór skórki
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z) {
                if (czymenu) {
                    skórka = 1;
                    gracz.ZmianaTekstury(skórka);
                    czymenu = false;
                    czygra = true;
                }
                
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::X) {
                if (czymenu) {
                    skórka = 2;
                    gracz.ZmianaTekstury(skórka);
                    czymenu = false;
                    czygra = true;
                }
            }
            
            //ruch Gracza
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::D) {
                if (czygra) {
                    gracz.ruch(1, 0, sciany, enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, interfejs, ruch);


                    if (sprawdzKolizje(gracz.getGracz(), enemy1.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy2.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy3.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy4.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy5.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy6.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    if (sprawdzKolizje(gracz.getGracz(), moneta.getMoneta())) {
                        moneta.losujpozycje(sciany);
                        ss.str("");
                        punkty = punkty + 1;
                        ss << "Punkty: " << punkty;
                        interfejs.setTextPunkty((ss.str()));
                    }
                }
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::A) {
                if(czygra){
                    gracz.ruch(-1, 0, sciany, enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, interfejs, ruch);

                    if (sprawdzKolizje(gracz.getGracz(), enemy1.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy2.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy3.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy4.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy5.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy6.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    if (sprawdzKolizje(gracz.getGracz(), moneta.getMoneta())) {
                        moneta.losujpozycje(sciany);
                        ss.str("");
                        punkty = punkty + 1;
                        ss << "Punkty: " << punkty;
                        interfejs.setTextPunkty((ss.str()));
                    }
                }
                
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::W) {
                if (czygra) {
                    gracz.ruch(0, -1, sciany, enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, interfejs, ruch);

                    if (sprawdzKolizje(gracz.getGracz(), enemy1.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy2.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy3.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy4.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy5.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy6.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    if (sprawdzKolizje(gracz.getGracz(), moneta.getMoneta())) {
                        moneta.losujpozycje(sciany);
                        ss.str("");
                        punkty = punkty + 1;
                        ss << "Punkty: " << punkty;

                        interfejs.setTextPunkty((ss.str()));
                    }
                }
                
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::S) {
                if (czygra) {
                    gracz.ruch(0, 1, sciany, enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, interfejs, ruch);


                    if (sprawdzKolizje(gracz.getGracz(), enemy1.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy2.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy3.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy4.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy5.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    else if (sprawdzKolizje(gracz.getGracz(), enemy6.getEnemy())) {
                        std::cout << "Kolizja!" << std::endl;
                        window.close();
                    }
                    if (sprawdzKolizje(gracz.getGracz(), moneta.getMoneta())) {
                        moneta.losujpozycje(sciany);
                        ss.str("");
                        punkty = punkty + 1;
                        ss << "Punkty: " << punkty;
                        interfejs.setTextPunkty((ss.str()));

                    }
                }
                
            }
            //obs³uga pauzy
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::F1) {
                if (czygra) {
                    czygra = false;
                    czypauza = true;
                }
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::C) {
                if (czypauza) {
                    czypauza = false;
                    czygra = true;
                }
            }
            //obs³uga wyjœcia
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                
                if (czygra) {
                    czygra = false;
                    cobylo = 2;
                }
                if (czymenu) {
                    czymenu = false;
                    cobylo = 1;
                }
                if (czypauza) {
                    czypauza = false;
                    cobylo = 3;
                }
                
                czyexit = true;
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::T) {
                if (czyexit) {
                    window.close();
                }
            }
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::N) {
                if (czyexit) {
                    czyexit = false;
                    if (cobylo == 1) {
                        czymenu = true;
                    }
                    if (cobylo == 2) {
                        czygra = true;
                    }
                    if (cobylo == 3) {
                        czypauza = true;
                    }
                }
            }
        }


        if (czyexit) {
            window.draw(exit.GetExit());
        }
        if (czypauza) {
            window.draw(pauza.GetPomoc());
        }
    
        if (czymenu) {
            window.draw(menu.GetMenu());
        }

        if (czygra) {
            window.clear(sf::Color::Black);
            interfejs.draw();
            tile.draw(window);
            window.draw(gracz.getGracz());
            window.draw(enemy1.getEnemy());
            window.draw(enemy2.getEnemy());
            window.draw(enemy3.getEnemy());
            window.draw(enemy4.getEnemy());
            window.draw(enemy5.getEnemy());
            window.draw(enemy6.getEnemy());
            window.draw(moneta.getMoneta());
        }
        
        window.display();
    }
    
    return 0;
}