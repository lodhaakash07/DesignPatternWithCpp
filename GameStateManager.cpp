/*

Singleton Pattern Implementation

*/


#include <iostream>
#include "GameStateManager.h"

using namespace std;


GameStateManager* GameStateManager::instance = nullptr;

GameStateManager* GameStateManager::getInstance() {
    if(instance == nullptr) {
        instance = new GameStateManager();
    }
    return instance;
}