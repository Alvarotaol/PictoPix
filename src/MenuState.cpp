#include "MenuState.h"

using namespace sf;
MenuState::MenuState(int _id):GameState(_id)
{

}

void MenuState::atualizar(RenderWindow* tj, int ms){

}

void MenuState::iniciar(RenderWindow* tj){

    retJogar.setFillColor(Color::White);
    retJogar.setOutlineColor(Color::Black);
    retJogar.setOutlineThickness(3.0f);
    retJogar.setSize(Vector2f(100, 30));
    retJogar.setPosition(tj->getSize().x/2 - 50, tj->getSize().y/2 - 40 );
}

void MenuState::renderizar(RenderWindow* tj){
    tj->clear(Color::White);
    tj->draw(retJogar);
}
