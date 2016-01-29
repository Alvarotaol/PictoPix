#ifndef ITEMMENU_H
#define ITEMMENU_H
#include <SFML/Graphics.hpp>

using namespace sf;

class ItemMenu : public Transformable, public Drawable
{
    public:
        ItemMenu();
        ItemMenu(String texto);
        ItemMenu(float _larg, float _alt);
        ItemMenu(String texto, float _larg, float _alt);
        void setSize(Vector2f _size);
        void setTexto(String _texto);
        bool contemPonto(Vector2i ponto);
        virtual void draw(RenderTarget& target, RenderStates states) const;
        void setFonte(Font & _fonte, int _tam);
        //void move(float _x, float _y);
        FloatRect getGlobalBounds();
    protected:
    private:
        RectangleShape retan;
        Text texto;
};

#endif // ITEMMENU_H
