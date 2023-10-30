#include <SFML/Graphics.hpp>
#include <filesystem>
#include <iostream>

int main() {

    float noteeco = 0;
    float emprunt = 0;
    int page = 1;

    sf::RenderWindow window(sf::VideoMode(1980,1080), "GreenBank", sf::Style::Titlebar | sf::Style::Close);

    sf::Font font;
    std::filesystem::path fontPath = std::filesystem::current_path();
    fontPath.append("ARIAL.TTF");
    if (!font.loadFromFile(fontPath.string()))
    {
        return -1;
    }

    sf::Text carText("Choisissez le type de vehicule.", font, 50);
    carText.setFillColor(sf::Color::Black);
    carText.setPosition(605.f, 150.f);

    sf::Text energyText("Choisissez l'energie.", font, 50);
    energyText.setFillColor(sf::Color::Black);
    energyText.setPosition(750.f, 150.f);

    sf::Text kilometrageText("Entrez le kilometrage.", font, 50);
    kilometrageText.setFillColor(sf::Color::Black);
    kilometrageText.setPosition(750.f, 200.f);

    sf::Text yearText("Entrez l'annee.", font, 50);
    yearText.setFillColor(sf::Color::Black);
    yearText.setPosition(810.f, 200.f);

    sf::Text passagerText("Choisissez le nombre de passager(s).", font, 50);
    passagerText.setFillColor(sf::Color::Black);
    passagerText.setPosition(605.f, 200.f);

    sf::Text empruntText("", font, 50);
    empruntText.setFillColor(sf::Color::Black);
    empruntText.setPosition(480.f, 200.f);

    sf::Texture carTexture;
    std::filesystem::path carPath = std::filesystem::current_path();
    carPath.append("car.png");
    if (!carTexture.loadFromFile(carPath.string()))
    {
        return  -1;
    }

    sf::Sprite car;
    car.setTexture(carTexture);
    car.setPosition(880.f,300.f);

    sf::Texture energyTexture;
    std::filesystem::path energyPath = std::filesystem::current_path();
    energyPath.append("energy.png");
    if (!energyTexture.loadFromFile(energyPath.string()))
    {
        return  -1;
    }

    sf::Sprite energy;
    energy.setTexture(energyTexture);
    energy.setPosition(925.f,240.f);

    sf::Texture kilometrageTexture;
    std::filesystem::path kilometragePath = std::filesystem::current_path();
    kilometragePath.append("kilometrage.png");
    if (!kilometrageTexture.loadFromFile(kilometragePath.string()))
    {
        return  -1;
    }

    sf::Sprite kilometrage;
    kilometrage.setTexture(kilometrageTexture);
    kilometrage.setPosition(925.f,290.f);

    sf::Texture yearTexture;
    std::filesystem::path yearPath = std::filesystem::current_path();
    yearPath.append("year.png");
    if (!yearTexture.loadFromFile(yearPath.string()))
    {
        return  -1;
    }

    sf::Sprite year;
    year.setTexture(yearTexture);
    year.setPosition(905.f,290.f);

    sf::Texture passagerTexture;
    std::filesystem::path passagerPath = std::filesystem::current_path();
    passagerPath.append("passager.png");
    if (!passagerTexture.loadFromFile(passagerPath.string()))
    {
        return  -1;
    }

    sf::Sprite passager;
    passager.setTexture(passagerTexture);
    passager.setPosition(935.f,330.f);

    sf::RectangleShape citadine(sf::Vector2f(200,60));
    citadine.setPosition(857.f,800.f);
    citadine.setFillColor(sf::Color::White);
    citadine.setOutlineColor(sf::Color::Black);
    citadine.setOutlineThickness(5);

    sf::Text citadineText("Citadine", font, 20);
    citadineText.setFillColor(sf::Color::Black);
    citadineText.setPosition(915.f,815.f);

    sf::RectangleShape cabriolet(sf::Vector2f(200,60));
    cabriolet.setPosition(857.f,685.f);
    cabriolet.setFillColor(sf::Color::White);
    cabriolet.setOutlineColor(sf::Color::Black);
    cabriolet.setOutlineThickness(5);

    sf::Text cabrioletText("Cabriolet", font, 20);
    cabrioletText.setFillColor(sf::Color::Black);
    cabrioletText.setPosition(915.f,700.f);

    sf::RectangleShape berline(sf::Vector2f(200,60));
    berline.setPosition(857.f,570.f);
    berline.setFillColor(sf::Color::White);
    berline.setOutlineColor(sf::Color::Black);
    berline.setOutlineThickness(5);

    sf::Text berlineText("Berline", font, 20);
    berlineText.setFillColor(sf::Color::Black);
    berlineText.setPosition(925.f,585.f);

    sf::RectangleShape suv(sf::Vector2f(200,60));
    suv.setPosition(857.f,455.f);
    suv.setFillColor(sf::Color::White);
    suv.setOutlineColor(sf::Color::Black);
    suv.setOutlineThickness(5);

    sf::Text suvText("Suv/4x4", font, 20);
    suvText.setFillColor(sf::Color::Black);
    suvText.setPosition(920.f,470.f);

    sf::RectangleShape essence(sf::Vector2f(200,60));
    essence.setPosition(857.f,800.f);
    essence.setFillColor(sf::Color::White);
    essence.setOutlineColor(sf::Color::Black);
    essence.setOutlineThickness(5);

    sf::Text essenceText("Essence", font, 20);
    essenceText.setFillColor(sf::Color::Black);
    essenceText.setPosition(915.f,815.f);

    sf::RectangleShape electrique(sf::Vector2f(200,60));
    electrique.setPosition(857.f,685.f);
    electrique.setFillColor(sf::Color::White);
    electrique.setOutlineColor(sf::Color::Black);
    electrique.setOutlineThickness(5);

    sf::Text electriqueText("Electrique", font, 20);
    electriqueText.setFillColor(sf::Color::Black);
    electriqueText.setPosition(910.f,700.f);

    sf::RectangleShape gaz(sf::Vector2f(200,60));
    gaz.setPosition(857.f,570.f);
    gaz.setFillColor(sf::Color::White);
    gaz.setOutlineColor(sf::Color::Black);
    gaz.setOutlineThickness(5);

    sf::Text gazText("Gaz", font, 20);
    gazText.setFillColor(sf::Color::Black);
    gazText.setPosition(935.f,585.f);

    sf::RectangleShape diesel(sf::Vector2f(200,60));
    diesel.setPosition(857.f,455.f);
    diesel.setFillColor(sf::Color::White);
    diesel.setOutlineColor(sf::Color::Black);
    diesel.setOutlineThickness(5);

    sf::Text dieselText("Diesel", font, 20);
    dieselText.setFillColor(sf::Color::Black);
    dieselText.setPosition(925.f,470.f);

    sf::RectangleShape hybride(sf::Vector2f(200,60));
    hybride.setPosition(857.f,340.f);
    hybride.setFillColor(sf::Color::White);
    hybride.setOutlineColor(sf::Color::Black);
    hybride.setOutlineThickness(5);

    sf::Text hybrideText("Hybride", font, 20);
    hybrideText.setFillColor(sf::Color::Black);
    hybrideText.setPosition(920.f,355.f);

    sf::RectangleShape kilometrageInput(sf::Vector2f(200,60));
    kilometrageInput.setPosition(857.f,430.f);
    kilometrageInput.setFillColor(sf::Color::White);
    kilometrageInput.setOutlineColor(sf::Color::Black);
    kilometrageInput.setOutlineThickness(5);

    sf::Text kilometrageInputText("", font, 30);
    kilometrageInputText.setFillColor(sf::Color::Black);
    kilometrageInputText.setPosition(912.5f,440.f);

    sf::RectangleShape yearInput(sf::Vector2f(200,60));
    yearInput.setPosition(857.f,430.f);
    yearInput.setFillColor(sf::Color::White);
    yearInput.setOutlineColor(sf::Color::Black);
    yearInput.setOutlineThickness(5);

    sf::Text yearInputText("", font, 30);
    yearInputText.setFillColor(sf::Color::Black);
    yearInputText.setPosition(920.f,440.f);

    sf::RectangleShape x4(sf::Vector2f(200,60));
    x4.setPosition(857.f,800.f);
    x4.setFillColor(sf::Color::White);
    x4.setOutlineColor(sf::Color::Black);
    x4.setOutlineThickness(5);

    sf::Text x4Text("4 passagers", font, 20);
    x4Text.setFillColor(sf::Color::Black);
    x4Text.setPosition(902.5f,815.f);

    sf::RectangleShape x3(sf::Vector2f(200,60));
    x3.setPosition(857.f,685.f);
    x3.setFillColor(sf::Color::White);
    x3.setOutlineColor(sf::Color::Black);
    x3.setOutlineThickness(5);

    sf::Text x3Text("3 passagers", font, 20);
    x3Text.setFillColor(sf::Color::Black);
    x3Text.setPosition(902.5f,700.f);

    sf::RectangleShape x2(sf::Vector2f(200,60));
    x2.setPosition(857.f,570.f);
    x2.setFillColor(sf::Color::White);
    x2.setOutlineColor(sf::Color::Black);
    x2.setOutlineThickness(5);

    sf::Text x2Text("2 passagers", font, 20);
    x2Text.setFillColor(sf::Color::Black);
    x2Text.setPosition(902.5f,585.f);

    sf::RectangleShape x1(sf::Vector2f(200,60));
    x1.setPosition(857.f,455.f);
    x1.setFillColor(sf::Color::White);
    x1.setOutlineColor(sf::Color::Black);
    x1.setOutlineThickness(5);

    sf::Text x1Text("1 passager", font, 20);
    x1Text.setFillColor(sf::Color::Black);
    x1Text.setPosition(905.f,470.f);

    sf::RectangleShape restart(sf::Vector2f(200,60));
    restart.setPosition(857.f,430.f);
    restart.setFillColor(sf::Color::White);
    restart.setOutlineColor(sf::Color::Black);
    restart.setOutlineThickness(5);

    sf::Text restartText("Recommencer", font, 25);
    restartText.setFillColor(sf::Color::Black);
    restartText.setPosition(875.f,442.5f);

    std::string input;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if(event.type == sf::Event::TextEntered)
            {
                if (page == 3)
                {
                    if(event.text.unicode == 8 && !input.empty())
                    {
                        input.pop_back();
                    }else if(event.text.unicode == 13)
                    {
                        if(!input.empty())
                        {
                            int value = std::stoi(input);
                            if(value <= 10000)
                            {
                                noteeco = noteeco + 9;
                            }else if(value >= 11000 && value <= 15000)
                            {
                                noteeco = noteeco + 7;
                            }else if(value >= 16000 && value <= 20000)
                            {
                                noteeco = noteeco + 5;
                            }else if(value >= 21000 && value <= 25000)
                            {
                                noteeco = noteeco + 3;
                            }else if(value >= 26000)
                            {
                                noteeco = noteeco + 1;
                            }
                        }
                        input.clear();
                        page = 4;
                    }else if(event.text.unicode >= 48 && event.text.unicode <= 57 && input.length() < 5)
                    {
                        input += static_cast<char>(event.text.unicode);
                    }
                    kilometrageInputText.setString(input);
                }else if(page == 4)
                {
                    if(event.text.unicode == 8 && !input.empty())
                    {
                        input.pop_back();
                    }else if(event.text.unicode == 13)
                    {
                        if(!input.empty())
                        {
                            int value = std::stoi(input);
                            if(value <= 1970)
                            {
                                noteeco = noteeco + 1;
                            }else if(value >= 1971 && value <= 1980)
                            {
                                noteeco = noteeco + 2;
                            }else if(value >= 1991 && value <= 2000)
                            {
                                noteeco = noteeco + 4;
                            }else if(value >= 2001 && value <= 2010)
                            {
                                noteeco = noteeco + 5;
                            }else if(value >= 2011)
                            {
                                noteeco = noteeco + 7;
                            }
                        }
                        input.clear();
                        page = 5;
                    }else if(event.text.unicode >= 48 && event.text.unicode <= 57 && input.length() < 4)
                    {
                        input += static_cast<char>(event.text.unicode);
                    }
                    yearInputText.setString(input);
                }
            }
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if(event.mouseButton.button == sf::Mouse::Left)
                {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    if(page == 1)
                    {
                        if (citadine.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            citadine.setFillColor(sf::Color(240, 240, 240));
                        } else if (cabriolet.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            cabriolet.setFillColor(sf::Color(240, 240, 240));
                        } else if (berline.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            berline.setFillColor(sf::Color(240, 240, 240));
                        } else if (suv.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            suv.setFillColor(sf::Color(240, 240, 240));
                        }
                    }else if(page == 2)
                    {
                        if (essence.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            essence.setFillColor(sf::Color(240, 240, 240));
                        } else if (electrique.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            electrique.setFillColor(sf::Color(240, 240, 240));
                        } else if (gaz.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            gaz.setFillColor(sf::Color(240, 240, 240));
                        } else if (diesel.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            diesel.setFillColor(sf::Color(240, 240, 240));
                        } else if (hybride.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            hybride.setFillColor(sf::Color(240, 240, 240));
                        }
                    }else if(page == 5)
                    {
                        if (x1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x1.setFillColor(sf::Color(240, 240, 240));
                        } else if (x2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x2.setFillColor(sf::Color(240, 240, 240));
                        } else if (x3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x3.setFillColor(sf::Color(240, 240, 240));
                        } else if (x4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x4.setFillColor(sf::Color(240, 240, 240));
                        }
                    }else if(page == 6)
                    {
                        if (restart.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            restart.setFillColor(sf::Color(240, 240, 240));
                        }
                    }
                }
            }
            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    if(page == 1)
                    {
                        if (citadine.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            citadine.setFillColor(sf::Color::White);
                            noteeco = 8;
                            page = 2;
                        } else if (cabriolet.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            cabriolet.setFillColor(sf::Color::White);
                            noteeco = 6;
                            page = 2;
                        } else if (berline.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            berline.setFillColor(sf::Color::White);
                            noteeco = 6.5;
                            page = 2;
                        } else if (suv.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            suv.setFillColor(sf::Color::White);
                            noteeco = 4;
                            page = 2;
                        }
                    }else if(page == 2){
                        if (essence.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            essence.setFillColor(sf::Color::White);
                            noteeco = noteeco + 5;
                            page = 3;
                        }else if (electrique.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            electrique.setFillColor(sf::Color::White);
                            noteeco = noteeco + 9;
                            page = 3;
                        }else if (gaz.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            gaz.setFillColor(sf::Color::White);
                            noteeco = noteeco + 6;
                            page = 3;
                        }else if (diesel.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            diesel.setFillColor(sf::Color::White);
                            noteeco = noteeco + 4;
                            page = 3;
                        }else if (hybride.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            hybride.setFillColor(sf::Color::White);
                            noteeco = noteeco + 7;
                            page = 3;
                        }
                    }else if(page == 5){
                        if (x1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x1.setFillColor(sf::Color::White);
                            if(noteeco <= 10)
                            {
                                emprunt = 3 + 0.11;
                            }else if(noteeco >= 11 && noteeco <= 15)
                            {
                                emprunt = 2.74 + 0.11;
                            }else if(noteeco >= 16 && noteeco <= 25)
                            {
                                emprunt = 2.52 + 0.11;
                            }else if(noteeco >= 26 && noteeco <= 33)
                            {
                                emprunt = 2.10 + 0.11;
                            }else if(noteeco >= 34 && noteeco <= 40)
                            {
                                emprunt = 1.85 + 0.11;
                            }
                            page = 6;
                        }else if (x2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x2.setFillColor(sf::Color::White);
                            if(noteeco <= 10)
                            {
                                emprunt = 3 - 0.17;
                            }else if(noteeco >= 11 && noteeco <= 15)
                            {
                                emprunt = 2.74 - 0.17;
                            }else if(noteeco >= 16 && noteeco <= 25)
                            {
                                emprunt = 2.52 - 0.17;
                            }else if(noteeco >= 26 && noteeco <= 33)
                            {
                                emprunt = 2.10 - 0.17;
                            }else if(noteeco >= 34 && noteeco <= 40)
                            {
                                emprunt = 1.85 - 0.17;
                            }
                            page = 6;
                        }else if (x3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x3.setFillColor(sf::Color::White);
                            if(noteeco <= 10)
                            {
                                emprunt = 3 - 0.29;
                            }else if(noteeco >= 11 && noteeco <= 15)
                            {
                                emprunt = 2.74 - 0.29;
                            }else if(noteeco >= 16 && noteeco <= 25)
                            {
                                emprunt = 2.52 - 0.29;
                            }else if(noteeco >= 26 && noteeco <= 33)
                            {
                                emprunt = 2.10 - 0.29;
                            }else if(noteeco >= 34 && noteeco <= 40)
                            {
                                emprunt = 1.85 - 0.29;
                            }
                            page = 6;
                        }else if (x4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            x4.setFillColor(sf::Color::White);
                            if(noteeco <= 10)
                            {
                                emprunt = 3 - 0.53;
                            }else if(noteeco >= 11 && noteeco <= 15)
                            {
                                emprunt = 2.74 - 0.53;
                            }else if(noteeco >= 16 && noteeco <= 25)
                            {
                                emprunt = 2.52 - 0.53;
                            }else if(noteeco >= 26 && noteeco <= 33)
                            {
                                emprunt = 2.10 - 0.53;
                            }else if(noteeco >= 34 && noteeco <= 40)
                            {
                                emprunt = 1.85 - 0.53;
                            }
                            page = 6;
                        }
                    }else if(page == 6)
                    {
                        if (restart.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            restart.setFillColor(sf::Color::White);
                            page = 1;
                        }
                    }
                }
            }
        }
        if(page == 1)
        {
            window.clear(sf::Color::White);
            window.draw(carText);
            window.draw(car);
            window.draw(citadine);
            window.draw(citadineText);
            window.draw(cabriolet);
            window.draw(cabrioletText);
            window.draw(berline);
            window.draw(berlineText);
            window.draw(suv);
            window.draw(suvText);
            window.display();
        }else if(page == 2)
        {
            window.clear(sf::Color::White);
            window.draw(energy);
            window.draw(energyText);
            window.draw(essence);
            window.draw(essenceText);
            window.draw(electrique);
            window.draw(electriqueText);
            window.draw(gaz);
            window.draw(gazText);
            window.draw(diesel);
            window.draw(dieselText);
            window.draw(hybride);
            window.draw(hybrideText);
            window.display();
        }else if(page == 3)
        {
            window.clear(sf::Color::White);
            window.draw(kilometrageInput);
            window.draw(kilometrageInputText);
            window.draw(kilometrage);
            window.draw(kilometrageText);
            window.display();
        }else if(page == 4)
        {
            window.clear(sf::Color::White);
            window.draw(yearInput);
            window.draw(yearInputText);
            window.draw(year);
            window.draw(yearText);
            window.display();
        }else if(page == 5)
        {
            window.clear(sf::Color::White);
            window.draw(passagerText);
            window.draw(passager);
            window.draw(x4);
            window.draw(x4Text);
            window.draw(x3);
            window.draw(x3Text);
            window.draw(x2);
            window.draw(x2Text);
            window.draw(x1);
            window.draw(x1Text);
            window.display();
        }else if(page == 6)
        {
            window.clear(sf::Color::White);
            window.draw(empruntText);
            std::ostringstream oss;
            oss << std::fixed << std::setprecision(2) << emprunt;
            empruntText.setString("Vous devrez payer " + oss.str() + "% de frais d'emprunt.");
            window.draw(restart);
            window.draw(restartText);
            window.display();
        }
    }

    return 0;
}