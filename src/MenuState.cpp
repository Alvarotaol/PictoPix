#include "MenuState.h"

using namespace sf;
MenuState::MenuState(int _id):GameState(_id)
{

}

void MenuState::atualizar(RenderWindow* tj, int ms){

    //Botão jogar
    if(retJogar.contemPonto(Mouse::getPosition(*tj))){
        retJogar.scale(1.05f);
        if(retJogar.getScale() > 1.3) retJogar.setScale(1.3f);
        if(Mouse::isButtonPressed(Mouse::Left)){
            tj->setTitle("Clicou");
        }
    } else {
        retJogar.scale(0.95f);
        if(retJogar.getScale() < 1) retJogar.setScale(1.f);
    }

    //Botão Editor
    if(retEditor.contemPonto(Mouse::getPosition(*tj))){
        retEditor.scale(1.05f);
        if(retEditor.getScale() > 1.3) retEditor.setScale(1.3f);
        if(Mouse::isButtonPressed(Mouse::Left)){
            tj->setTitle("Clicou editor");
        }
    } else {
        retEditor.scale(0.95f);
        if(retEditor.getScale() < 1) retEditor.setScale(1.f);
    }

    //Botão Sair
    if(retSair.contemPonto(Mouse::getPosition(*tj))){
        retSair.scale(1.05f);
        if(retSair.getScale() > 1.3) retSair.setScale(1.3f);
        if(Mouse::isButtonPressed(Mouse::Left)){
            tj->close();
        }
    } else {
        retSair.scale(0.95f);
        if(retSair.getScale() < 1) retSair.setScale(1.f);
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
    retJogar.setTexto("Jogar", fonte, 30);
    retJogar.move(  xinic, yinic + 0*(alt + afast));

    retEditor.setSize(Vector2f(larg, alt));
    retEditor.setTexto("Editor", fonte, 30);
    retEditor.move(  xinic, yinic + 1*(alt + afast));

    retSair.setSize(Vector2f(larg, alt));
    retSair.setTexto("Sair", fonte, 30);
    retSair.move(  xinic, yinic + 2*(alt + afast));
}

void MenuState::renderizar(RenderWindow* tj){
    tj->clear(Color::White);
    tj->draw(retJogar);
    tj->draw(retEditor);
    tj->draw(retSair);
}

