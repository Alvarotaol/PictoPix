#include "EditorPic.h"
using namespace sf;

EditorPic::EditorPic()
{
    //ctor
}

void EditorPic::criar(Vector2i _dim, Font _fonte){
    dim = _dim;
    dim.x *= 5;
    dim.y *= 5;
    //Linhas finas verticais
    linhasV.reserve(dim.x+1);
    for(int i = 0; i < dim.x + 1; i++){
        linhasV.push_back(RectangleShape(Vector2f(1.f, tPic*(3*dim.y/2 + 1))));
        linhasV[i].setFillColor(Color::Black);
        linhasV[i].move(tPic* (dim.y/2 + 1 + i), 0);
    }
    //Linhas grossas verticais
    for(int i = 0; i < dim.x + 1; i += 5){
        linhasV[i].scale(2,1);
    }

    //Linhas finas horizontais
    linhasH.reserve(dim.y+1);
    for(int i = 0; i < dim.y + 1; i++){
        linhasH.push_back(RectangleShape(Vector2f(tPic*(3*dim.x/2 + 1), 1.f)));
        linhasH[i].setFillColor(Color::Black);
        linhasH[i].move(0, tPic* (dim.x/2 + 1 + i));
    }
    //Linhas grossas horizontais
    for(int i = 0; i < dim.y + 1; i += 5){
        linhasH[i].scale(1,2);
    }
}

Vector2i EditorPic::getQuadros(){
    return dim;
}

void EditorPic::pintarPic(Vector2i ponto){

}

void EditorPic::draw(RenderTarget& target, RenderStates states) const{
    states.transform *= getTransform();
    for(int i = 0; i < dim.x + 1; i++){
        target.draw(linhasV[i], states);
    }
    for(int i = 0; i < dim.y + 1; i++){
        target.draw(linhasH[i], states);
    }
}

