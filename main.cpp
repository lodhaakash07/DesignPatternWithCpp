#include<iostream>
#include "GameStateManager.h"

using namespace std;

int main() {
    GameStateManager* gameStateManager = GameStateManager::getInstance();

    gameStateManager->setScore(4);
    cout << "Current Score is : " << gameStateManager->getScore() << endl;
    return 0;
}