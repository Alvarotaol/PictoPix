#include "EditorState.h"

using namespace sf;

EditorState::EditorState(int _id):GameState(_id)
{
    //ctor
}

void EditorState::atualizar(Game *tj, int ms){
    if(Mouse::isButtonPressed(Mouse::Left)){
        ed.pintarPic(Mouse::getPosition(*tj));
    }
}

void EditorState::iniciar(Game *tj){
    if (!fonte.loadFromFile("COPRGTB.TTF")) {
        tj->setTitle("Erro ao carregar fonte");
    }
    ed.criar(Vector2i(3,3), fonte);
    ed.move(50, 50);
    ed.scale(1.5f, 1.5f);
}

void EditorState::renderizar(Game *tj){
    tj->clear(Color::White);
    tj->draw(ed);
}


