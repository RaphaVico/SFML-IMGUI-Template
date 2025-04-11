#include "imgui.h"
#include "imgui-SFML.h"
#include <iostream>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>

void options(float* fps) {
    ImGui::Begin("Options");
    ImGui::Text("FPS: %.1f", *fps);
    ImGui::End();
}

int main() {
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "ImGui + SFML = <3");
    window.setFramerateLimit(60);
    sf::Clock clock;
    ImGui::SFML::Init(window);
    sf::Clock fpsClock; 
    float fps = 0.0f;


    sf::Clock deltaClock;
    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart();  // Time since last frame
        float dt = deltaTime.asSeconds();
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        float currentTime = fpsClock.restart().asSeconds();
        fps = 1.0f / currentTime;
        ImGui::SFML::Update(window, deltaClock.restart());
        options(&fps);

        window.clear();
        sf::RectangleShape rect(sf::Vector2f(500.0f, 500.0f));
        window.draw(rect);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}