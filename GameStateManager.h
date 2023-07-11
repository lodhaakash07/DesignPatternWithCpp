#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H
/*
Header guard and the class name should be different to prevent compile time issue
*/

class GameStateManager {
    private:
        int score;

        static GameStateManager* instance;

        GameStateManager(): score(0) {}

    public:

        static GameStateManager* getInstance();

        int getScore() { return score;}

        void setScore(int s) { score = s;}
};


#endif