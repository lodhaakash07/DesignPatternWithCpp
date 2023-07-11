#include<iostream>
#include "GameStateManager.h"
#include "GameAudio.h"
#include "Observer.h"

using namespace std;

int main() {
    GameStateManager* gameStateManager = GameStateManager::getInstance();

    GameAudio *gameAudio = new AudioAdapter();
    gameStateManager->setScore(4);
    cout << "Current Score is : " << gameStateManager->getScore() << endl;
    
    // Play the sound using the audio adapter
    gameAudio->playSound("La La Land");

    // Observer Pattern
    Player player;
    GameOverScreen gameOverScreen;

    Subject subject;
    subject.addObserver(&player);
    subject.addObserver(&gameOverScreen);

    subject.notify(10);
    subject.notify(0);

    return 0;
}