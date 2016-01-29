#include "IdEstados.h"
int main()
{

    Game teste(300, 500);
    MenuState menu(IdMenu);
    teste.addState(&menu);
    teste.run();
    return 0;
}
