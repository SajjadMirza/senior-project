#ifndef _SOUND_H
#define _SOUND_H_

#include <fmod.hpp>
#include <fmod_errors.h>

class Sound {
    private:
        unsigned int version;
        int numDrivers;
        FMOD_SPEAKERMODE speakerMode;
        FMOD_CAPS caps;
        
        void FMODErrorCheck(FMOD_RESULT result); // for FMOD error checking
        void FMODVersionCheck(); // for FMOD version checking
    public:
        FMOD::System *system;
        int initSound(); // Init System within Sound class to be able to play music
};

#endif
