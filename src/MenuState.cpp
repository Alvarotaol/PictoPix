#include "MenuState.h"

using namespace sf;
MenuState::MenuState(int _id):GameState(_id)
{

}

void MenuState::atualizar(RenderWindow* tj, int ms){
    if(retJogar.contemPonto(Mouse::getPosition(*tj))){
       retJogar.scale(1.05f, 1.05f);
       if(retJogar.getScale().x > 1.3) retJogar.setScale(1.3f, 1.3f);
    } else {
        retJogar.scale(0.95f, 0.95f);
        if(retJogar.getScale().x < 1) retJogar.setScale(1.f, 1.f);
    }
}

void MenuState::iniciar(RenderWindow* tj){

    if (!fonte.loadFromFile("COPRGTB.TTF"))
    {
        tj->setTitle("Erro ao carregar fonte");
    }

    int tt = nBots * alt + (nBots - 1) * afast,
        yinic = tj->getSize().y/2 - tt / 2 + alt/2,
        xinic = tj->getSize().x/2;


    retJogar.setSize(Vector2f(larg, alt));
    retJogar.setTexto("Jogar");
    retJogar.setFonte(fonte, 30);
    retJogar.move(  xinic, yinic + 0*(alt + afast));

    retEditor.setSize(Vector2f(larg, alt));
    retEditor.setTexto("Editor");
    retEditor.setFonte(fonte, 30);
    retEditor.move(  xinic, yinic + 1*(alt + afast));

    retSair.setSize(Vector2f(larg, alt));
    retSair.setTexto("Sair");
    retSair.setFonte(fonte, 30);
    retSair.move(  xinic, yinic + 2*(alt + afast));
}

void MenuState::renderizar(RenderWindow* tj){
    tj->clear(Color::White);
    tj->draw(retJogar);
    tj->draw(retEditor);
    tj->draw(retSair);
}

