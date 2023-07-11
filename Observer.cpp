#include "Observer.h"
#include<algorithm>
using namespace std;

void Player::update(int health) {
    if (health <=0) {
        cout << "Player is dead" << endl;
    } else {
        cout << "Player's health " << health << endl;
    }
}

void GameOverScreen::update(int health) {
    if( health <=0 ) {
        cout << " Game over " << endl;
    } 
}

void Subject::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Subject::removeObserver(Observer* observer) {
    observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}

void Subject::notify(int health) {
    for(Observer* observer: observers) {
        observer->update(health);
    }
}

