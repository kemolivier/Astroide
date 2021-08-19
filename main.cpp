#include <SFML/Graphics.hpp>
#include "vaisseau.h"
int main()
{
    sf::RenderWindow fenetre(sf::VideoMode(800, 600), "Asteroide");
    sf::CircleShape shape(70.f);
    shape.setFillColor(sf::Color{120, 255, 120});
    auto vaisseau = Vaisseau();

    while (fenetre.isOpen())
    {
        auto evenement = sf::Event{};
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == sf::Event::Closed)
            {
                fenetre.close();
            }

            if (evenement.type == sf::Event::KeyPressed)
            {

            	//vaisseau.avancer();
            }

        }

        fenetre.clear();
        fenetre.draw(shape);
        vaisseau.afficher(fenetre);
        fenetre.display();
    }

    return 0;
}
