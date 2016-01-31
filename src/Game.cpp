#include "Game.h"
using namespace sf;
Game::Game()
{
    create(VideoMode(800, 600), "");
}
Game::Game(int _largura, int _altura){
    create(VideoMode(_largura, _altura), "");
}

Game::Game(int _largura, int _altura, std::string _titulo){
    create(VideoMode(_largura, _altura), _titulo);
}

void Game::run(){
// TODO (alvaro#1#): Adicionar erro caso não haja um GameState corrente.
    corrente->iniciar(this);
    while(isOpen()){
        Event e;
        while(pollEvent(e)){
            if (e.type == Event::Closed)
                close();
        }

        Clock c;
        corrente->atualizar(this, c.restart().asMilliseconds());
        corrente->renderizar(this);
        display();
    }
}

void Game::addState(GameState* gs){
    if(estados.empty()) corrente = gs;
    estados[gs->getId()] = gs;
}

void Game::changeState(int _id){
// TODO (alvaro#1#): Adicionar erro caso o GameState passado não esteja no Game
    corrente = estados[_id];
    corrente->iniciar(this);
}

