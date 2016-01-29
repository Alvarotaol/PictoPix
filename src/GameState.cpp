#include "GameState.h"

GameState::GameState(){}

GameState::GameState(int _id)
{
    id = _id;
}

int GameState::getId(){
    return id;
}
