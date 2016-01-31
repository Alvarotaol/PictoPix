#include "IdEstados.h"
#include "Game.h"
#include "MenuState.h"
#include "EditorState.h"
int main()
{

    Game teste(500, 500);
    MenuState menu(IdMenu);
    EditorState editor(IdEditor);
    teste.addState(&menu);
    teste.addState(&editor);
    teste.run();
    return 0;
}
