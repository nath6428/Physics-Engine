#include <SFML/Graphics.hpp>
#pragma once

class Object {

private:

    float mass = 1;
    float volume = 1;
    float x = 50;
    float y = 50;
    float vx = 0;
    float vy = 0;
    float ax = 0;
    float ay = 0;
    sf::Color color = sf::Color::Red;

public:
    
    Object() = default;
    Object(float x, float y): x(x), y(y) {}

    sf::CircleShape draw(){

        int radius = 50;
        sf::CircleShape circle(radius);
        circle.setFillColor(color);
        circle.setPosition(x + radius, y + radius); // Center the circle in the window
        return circle;
    
    }

    void update(float deltaTime){
        ay = 9.8;
        vy += ay * deltaTime;
        y += vy * deltaTime;
    }
    

};