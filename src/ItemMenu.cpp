#include "ItemMenu.h"
using namespace sf;

ItemMenu::ItemMenu()
{
    retan.setOutlineColor(Color::Black);
    retan.setFillColor(Color::White);
    retan.setOutlineThickness(3.f);

    texto.setString(" ");
    texto.setColor(Color::Black);
    texto.setCharacterSize(10);
}

void ItemMenu::setSize(Vector2f _size){
    retan.setSize(_size);
    retan.setOrigin(_size.x/2, _size.y/2);
}

void ItemMenu::setTexto(String _texto, Font & _fonte, int _tam){
    texto.setFont(_fonte);
    texto.setCharacterSize(_tam);
    texto.setString(_texto);
    texto.setOrigin(texto.getLocalBounds().width/2, 3*texto.getLocalBounds().height/4);
    //texto.setOrigin(15,10);
}

bool ItemMenu::contemPonto(Vector2i ponto){
    return getGlobalBounds().contains(ponto.x, ponto.y);
    //return false;
}

void ItemMenu::draw(RenderTarget& target, RenderStates states) const{
    states.transform *= getTransform();
    target.draw(retan, states);
    target.draw(tbo, states);
    target.draw(texto, states);
}

FloatRect ItemMenu::getGlobalBounds(){
    FloatRect bound;
    bound.width = retan.getGlobalBounds().width;
    bound.height = retan.getGlobalBounds().height;

    bound.left = retan.getGlobalBounds().left + Transformable::getPosition().x;
    bound.top = retan.getGlobalBounds().top + Transformable::getPosition().y;/**/

    return bound;
}

void ItemMenu::scale(float fator){
    retan.scale(fator,fator);
}

void ItemMenu::setScale(float fator){
    retan.setScale(fator,fator);
}

float ItemMenu::getScale(){
    return retan.getScale().x;
}
