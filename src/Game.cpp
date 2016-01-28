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
    while(telaJogo.isOpen()){
        Event e;
        while(telaJogo.pollEvent(e)){
            if (e.type == Event::Closed)
                telaJogo.close();
        }

        telaJogo.clear();
        Clock c;
        atualizar(c.restart().asMilliseconds());
        renderizar();
        telaJogo.display();
    }

}
