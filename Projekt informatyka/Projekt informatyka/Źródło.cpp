#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <random>
#include <iostream>





class Gracz {
private:
    sf::Sprite ludzik;
    sf::Texture tekstura;
    sf::Vector2f pozycja;
    sf::Clock zegar;
    
public:
    Gracz(float x, float y);
    sf::Sprite getGracz() {
        return ludzik;
    }
    void ruch(float x, float y, const std::vector<sf::Vector2f>& sciany);
};

Gracz::Gracz(float x, float y) {
    pozycja.x = x;
    pozycja.y = y;
    ludzik.setPosition(pozycja);
    tekstura.loadFromFile("buzia.PNG");
    ludzik.setTexture(tekstura);
    ludzik.setScale(0.0477, 0.0666); //51,93px
}

void Gracz::ruch(float x, float y, const std::vector<sf::Vector2f>& sciany) {
    if (zegar.getElapsedTime().asSeconds() > 0.5){
        pozycja.x = pozycja.x + x;
        pozycja.y = pozycja.y + y;
        for (const auto& vector : sciany)
        {
            if (pozycja == vector) {
                pozycja.x = pozycja.x - x;
                pozycja.y = pozycja.y - y;
            }
        }
        
        ludzik.setPosition(pozycja);
        std::cout << pozycja.x << " " << pozycja.y << std::endl;
        zegar.restart();
    }
 
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
    delete labirynt;
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

    std::vector<sf::Vector2f> sciany;
    sciany.push_back(sf::Vector2f(85, 111));
    sciany.push_back(sf::Vector2f(140, 111));
    sciany.push_back(sf::Vector2f(305, 111));
    sciany.push_back(sf::Vector2f(360, 111));
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


    Gracz gracz(30, 60); //30,60 to 1 kafelek, 55 w x, 51 w y
    Interfejs interfejs(sf::Vector2f(600, 600), &window);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::D)
                gracz.ruch(55, 0, sciany);
            
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::A)
                gracz.ruch(-55, 0, sciany);
            
            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
                gracz.ruch(0, -51, sciany);

            if (sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
                gracz.ruch(0, 51, sciany);

        }

        window.clear(sf::Color::Black);
        interfejs.draw();
        window.draw(gracz.getGracz());
        window.display();
    }

    return 0;
}