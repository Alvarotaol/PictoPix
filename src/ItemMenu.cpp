#include "ItemMenu.h"
using namespace sf;

ItemMenu::ItemMenu()
{
    retan.setSize(Vector2f(10.f,10.f));
    retan.setOrigin(5.f,5.f);
    retan.setOutlineColor(Color::Black);
    retan.setFillColor(Color::White);
    retan.setOutlineThickness(3.f);
    texto.setString(" ");
    texto.setColor(Color::Black);
    texto.setCharacterSize(10);
}

ItemMenu::ItemMenu(String _texto)
{
    retan.setSize(Vector2f(10.f,10.f));
    retan.setOrigin(5.f,5.f);
    texto.setString(_texto);
}

ItemMenu::ItemMenu(float _larg, float _alt){
    retan.setSize(Vector2f(_larg, _alt));
    retan.setOrigin(_larg/2, _alt/2);
    texto.setString(" ");
}

ItemMenu::ItemMenu(String _texto, float _larg, float _alt){
    retan.setSize(Vector2f(_larg, _alt));
    retan.setOrigin(_larg/2, _alt/2);
    texto.setString(_texto);
}

void ItemMenu::setSize(Vector2f _size){
    retan.setSize(_size);
    retan.setOrigin(_size.x/2, _size.y/2);
}

void ItemMenu::setTexto(String _texto){
    texto.setString(_texto);
    //texto.setOrigin(texto.getLocalBounds().width/2, texto.getLocalBounds().height/2);
}

bool ItemMenu::contemPonto(Vector2i ponto){
    return getGlobalBounds().contains(ponto.x, ponto.y);
    //return false;
}

void ItemMenu::draw(RenderTarget& target, RenderStates states) const{
    states.transform *= getTransform();
    target.draw(retan, states);
    target.draw(texto, states);
}

void ItemMenu::setFonte(Font & _fonte, int _tam){

    texto.setFont(_fonte);
    texto.setCharacterSize(_tam);
}

/*void ItemMenu::move(float _x, float _y){
    //retan.setOrigin(_x, _y);
    //retan.setPosition(_x, _y);
    //Transformable::setOrigin(_x, _y);
    Transformable::setPosition(_x, _y);
}/**/

FloatRect ItemMenu::getGlobalBounds(){
    FloatRect bound;
    bound.width = retan.getSize().x;
    bound.height = retan.getSize().y;
    bound.left = Transformable::getPosition().x - bound.width/2;
    bound.top = Transformable::getPosition().y - bound.height/2;

    return bound;
}
