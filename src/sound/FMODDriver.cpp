#include <sound/FMODDriver.h>
#include <stdlib.h>
#include <stdio.h>

namespace sound {
    FMODDriver::FMODDriver() {
        FMOD_RESULT result;

        result = FMOD::System_Create(&system); // Create the main system object.
        if (result != FMOD_OK) {
            printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
            exit(-1);
        }

        result = system->init(512, FMOD_INIT_NORMAL, 0); // Initialize FMOD.
        if (result != FMOD_OK) {
            printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
            exit(-1);
        }
    }
    
    FMODDriver::~FMODDriver() {
        system->release();
    }
    
    void FMODDriver::testSound() {
        FMOD::Sound *audio;
        system->createSound("Audio.mp3", FMOD_DEFAULT, 0, &audio);
    }
}
