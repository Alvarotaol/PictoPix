#ifndef MENUSTATE_H
#define MENUSTATE_H

#include <GameState.h>
#include <ItemMenu.h>
#include "Game.h"
#include "IdEstados.h"
using namespace sf;

class MenuState : public GameState
{
    public:
        MenuState(int _id);
        virtual void atualizar(Game* tj, int ms);
        virtual void iniciar(Game* tj);
        virtual void renderizar(Game* tj);
    protected:
    private:
        static const int afast = 30, larg = 200, alt = 40, nBots = 3;
        ItemMenu retJogar, retEditor, retSair;
        Font fonte;
        Text txtJogar, txtEditor, txtSair;
};

#endif // MENUSTATE_H
