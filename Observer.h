/*

Observer pattern
Useful when we have multiple observers watching a subject.
The subject notifies all the observers when there is a change in its state.

*/

#ifndef Observer_H
#define Observer_H

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Observer {
    public:
        virtual ~Observer() {}
        virtual void update(int health) = 0;
};

class Player: public Observer {
    public:
        void update(int health);
        Player() {};
};

class GameOverScreen:public Observer {
    public:
        void update(int health);
};

class Subject {
    private:
        vector<Observer*> observers;

    public:
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void notify(int health);
};

#endif