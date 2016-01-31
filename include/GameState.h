#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Game.h"

class Game;

class GameState
{
    public:
        GameState();
        GameState(int _id);
        int getId();
        virtual void atualizar(Game* tj, int ms)=0;
        virtual void iniciar(Game* tj)=0;
        virtual void renderizar(Game* tj)=0;
    protected:
    private:
        int id;
};

#endif // GAMESTATE_H
