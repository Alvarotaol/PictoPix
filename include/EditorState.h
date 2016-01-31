#ifndef EDITORSTATE_H
#define EDITORSTATE_H

#include <GameState.h>
#include <EditorPic.h>
using namespace sf;

class EditorState : public GameState
{
    public:
        EditorState(int _id);
        virtual void atualizar(Game* tj, int ms);
        virtual void iniciar(Game* tj);
        virtual void renderizar(Game* tj);
    protected:
    private:
        Font fonte;
        EditorPic ed;
};

#endif // EDITORSTATE_H
