#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "SFML/Graphics.hpp"
using namespace sf;

class GameState
{
    public:
        GameState();
        GameState(int _id);
        int getId();
        virtual void atualizar(RenderWindow* tj, int ms)=0;
        virtual void iniciar(RenderWindow* tj)=0;
        virtual void renderizar(RenderWindow* tj)=0;
    protected:
    private:
        int id;
};

#endif // GAMESTATE_H
