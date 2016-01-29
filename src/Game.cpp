#include "Game.h"
using namespace sf;
Game::Game()
{
    telaJogo.create(VideoMode(800, 600), "");
}
Game::Game(int _largura, int _altura){
    telaJogo.create(VideoMode(_largura, _altura), "");
}

Game::Game(int _largura, int _altura, std::string _titulo){
    telaJogo.create(VideoMode(_largura, _altura), _titulo);
}

void Game::run(){
// TODO (alvaro#1#): Adicionar erro caso não haja um GameState corrente.
    corrente->iniciar(&telaJogo);
    while(telaJogo.isOpen()){
        Event e;
        while(telaJogo.pollEvent(e)){
            if (e.type == Event::Closed)
                telaJogo.close();
        }

        Clock c;
        corrente->atualizar(&telaJogo, c.restart().asMilliseconds());
        corrente->renderizar(&telaJogo);
        telaJogo.display();
    }
}

void Game::addState(GameState* gs){
    if(estados.empty()) corrente = gs;
    estados[gs->getId()] = gs;
}

void Game::changeState(GameState* gs){
// TODO (alvaro#1#): Adicionar erro caso o GameState passado não esteja no Game
    corrente = estados[gs->getId()];
    corrente->iniciar(&telaJogo);
}

RenderWindow* Game::getWindow(){
    return &telaJogo;
}

