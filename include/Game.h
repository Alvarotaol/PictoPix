#ifndef GAME_H
#define GAME_H
#include "GameState.h"
#include <iostream>
#include<map>
using namespace sf;

class Game
{
    public:
        Game();
        Game(int _largura, int _altura);
        Game(int _largura, int _altura, std::string _titulo);
        void run();
        void addState(GameState* gs);
        void changeState(GameState* gs);
        RenderWindow* getWindow();
    protected:
    private:
        RenderWindow telaJogo;
        std::map<int,GameState*> estados;
        GameState* corrente;
};

#endif // GAME_H
