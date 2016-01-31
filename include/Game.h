#ifndef GAME_H
#define GAME_H
#include <iostream>
#include<map>
#include "SFML/Graphics.hpp"
#include "GameState.h"

using namespace sf;

class GameState;

class Game : public RenderWindow
{
    public:
        Game();
        Game(int _largura, int _altura);
        Game(int _largura, int _altura, std::string _titulo);
        void run();
        void addState(GameState* gs);
        void changeState(int _id);
    protected:
    private:
        std::map<int,GameState*> estados;
        GameState* corrente;
};

#endif // GAME_H
