#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

class Game
{
    public:
        Game();
        Game(int _largura, int _altura);
        Game(int _largura, int _altura, std::string _titulo);
        void run();
        virtual void atualizar(int ms);
        virtual void iniciar();
        virtual void renderizar();
    protected:
    private:
        RenderWindow telaJogo;
};

#endif // GAME_H
