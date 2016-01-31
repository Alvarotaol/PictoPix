#ifndef EDITORPIC_H
#define EDITORPIC_H

#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;
using std::vector;

class EditorPic : public Transformable, public Drawable
{
    public:
        EditorPic();
        void criar(Vector2i _dim, Font _fonte);
        Vector2i getQuadros();
        void pintarPic(Vector2i ponto);
        virtual void draw(RenderTarget& target, RenderStates states) const;
    protected:
    private:
        const int tPic = 10;
        Vector2i dim;
        vector<RectangleShape> linhasV, linhasH;
        vector<Text> guias;
};

#endif // EDITORPIC_H
