#ifndef Game_Audio_H
#define Game_Audio_H
#include<string>
using namespace std;
/*

Structural pattern - Adapter
Used when integrating with third part libraries with different interface

*/
class GameAudio {
    public:
        virtual ~GameAudio() {}
        virtual void playSound(const string& soundfile) = 0;
};

// Adaptee
class ThirdPartyAudio {
    public:
        void audioOutput(const string& audioFile);
};


// Adapter
class AudioAdapter : public GameAudio {
    private:
        ThirdPartyAudio thirdPartyAudio;

    public:
        void playSound(const string& soundfile);
};

#endif