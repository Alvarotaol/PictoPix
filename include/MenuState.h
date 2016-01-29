#ifndef MENUSTATE_H
#define MENUSTATE_H

#include <GameState.h>
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
        RectangleShape retJogar;
        RectangleShape retEditor;
        RectangleShape retSair;
};

#endif // MENUSTATE_H
