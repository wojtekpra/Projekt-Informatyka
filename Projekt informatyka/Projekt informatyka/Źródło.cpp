#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <random>
#include <iostream>


class Gracz {
private:
    sf::Sprite ludzik;
    sf::Texture tekstura;
    sf::Vector2f pozycja;

    
public:
    Gracz(float x, float y);
    sf::Sprite getGracz() {
        return ludzik;
    }
};

Gracz::Gracz(float x, float y) {
    pozycja.x = x;
    pozycja.y = y;
    ludzik.setPosition(pozycja);
    tekstura.loadFromFile("buzia.PNG");
    ludzik.setTexture(tekstura);
    ludzik.setScale(0.0577, 0.0866); //51,93px
}



class Interfejs {
protected:
    sf::Vector2f wymiary;
    sf::Vector2f wymiarytla;
    sf::Text* Czas;
    sf::Font* czcionka;
    sf::RenderWindow* window;
    sf::RectangleShape* tlo;
    sf::Texture* labirynt;


    void init();

public:
    Interfejs(sf::Vector2f wymiary, sf::RenderWindow* window);
    ~Interfejs();
    void setText(std::string left);
    void draw();
};

Interfejs::Interfejs(sf::Vector2f wymiary, sf::RenderWindow* window) : wymiary(wymiary) {
    this->window = window;
    init();
}
Interfejs::~Interfejs() {
    delete tlo;
    delete Czas;
    delete czcionka;
}

void Interfejs::draw() {
    window->draw(*tlo);
    window->draw(*Czas);

}

void Interfejs::setText(std::string left) {
    Czas->setString(left);
}


void Interfejs::init() {
    czcionka = new sf::Font;
    czcionka->loadFromFile("arial.ttf");
    Czas = new sf::Text;

    tlo = new sf::RectangleShape;
    labirynt = new sf::Texture;
    labirynt->loadFromFile("mapa 2.png");
    tlo->setTexture(labirynt);


    Czas->setFont(*czcionka);
    Czas->setCharacterSize(28);
    Czas->setPosition(10, 5);
    Czas->setFillColor(sf::Color::Cyan);
    Czas->setString("Czas: ");


    wymiarytla.x = wymiary.x - 45;  //800 - 45 = 755px
    wymiarytla.y = wymiary.y - 80;  //520px
    tlo->setPosition(22, 50);
    tlo->setSize(wymiarytla);
    tlo->setFillColor(sf::Color::White);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Okno");
    sf::Event event;
    Gracz gracz(400, 300);
    Interfejs interfejs(sf::Vector2f(600, 600), &window);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        interfejs.draw();
        window.draw(gracz.getGracz());
        window.display();
    }

    return 0;
}