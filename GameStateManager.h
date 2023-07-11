#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H
/*
Header guard and the class name should be different to prevent compile time issue
*/

class GameStateManager {
    private:
        int level, score, health;

        static GameStateManager* instance;

        GameStateManager(): level(1), score(0), health(0) {}

    public:

        static GameStateManager* getInstance();
        int getLevel() { return level;}
        int getScore() { return score;}
        int getHealth() { return health;}

        void setLevel(int l) { level = l;}
        void setScore(int s) { score = s;}
        void setHealth(int h) { health = h;}
};


#endif