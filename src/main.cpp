#include <SFML/Graphics.hpp>
#include "object.hpp"
`

int main() {
    
    sf::RenderWindow window(sf::VideoMode(600, 600), "Physics Engine"); // 1px = 0.1 metres
    window.setFramerateLimit(60);
    sf::Clock clock;
    Object object1(50, 400);

    // Main loop
    while (window.isOpen()) {
        
        float deltaTime = clock.restart().asSeconds();
        object1.update(deltaTime);
        
        sf::CircleShape object1Implementation = object1.draw();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the shape
        window.draw(object1Implementation);

        // Display the window contents
        window.display();
    }

    return 0;
}


