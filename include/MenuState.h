#ifndef MENUSTATE_H
#define MENUSTATE_H

#include <GameState.h>
#include <ItemMenu.h>
#include <string>
using namespace sf;

class MenuState : public GameState
{
    public:
        MenuState(int _id);
        void atualizar(RenderWindow* tj, int ms);
        void iniciar(RenderWindow* tj);
        void renderizar(RenderWindow* tj);
    protected:
    private:
        static const int afast = 30, larg = 200, alt = 40, nBots = 3;
        ItemMenu retJogar, retEditor, retSair;
        Font fonte;
        Text txtJogar, txtEditor, txtSair;
};

#endif // MENUSTATE_H
