#include<iostream>
#include "GameAudio.h"
#include<string>
using namespace std;

void ThirdPartyAudio::audioOutput(const string& audioFile) {
    cout << "Playing thierd party audio " << audioFile << endl;
}

void AudioAdapter::playSound(const string& soundFile) {
    thirdPartyAudio.audioOutput(soundFile);
}