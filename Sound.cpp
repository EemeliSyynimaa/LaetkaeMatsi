#include"..\inc\Sound.hpp"

// Lataa ��nen
Mix_Chunk * Sound::load(std::string file)
{
    Mix_Chunk * temp = NULL;

    if((temp = Mix_LoadWAV(file.c_str())) == NULL)
    {
        fprintf(stderr,"....ERROR: Could not load sound %s\n",file.c_str());
        return false;
    }

    return temp;
}

// Toistaa ��nt� annetun m��r�n
void Sound::play(Mix_Chunk * sound, int repeat)
{
    if(sound == NULL) return;

    Mix_PlayChannel(-1, sound, repeat);
}

// Toistaa ��nt� annetun ajan
void Sound::playTime(Mix_Chunk * sound, int time)
{
    if(sound == NULL) return;

    Mix_PlayChannelTimed(-1,sound,-1,time);
}

// H�ivytt�� ��nen time:n nopeudella ja repeatin m��r�n
void Sound::fadeIn(Mix_Chunk * sound, int time, int repeat)
{
    if(sound == NULL) return;

    Mix_FadeInChannel(-1,sound,repeat,time);
}

// Asettaa ��nen voimakkuuden
void Sound::volume(Mix_Chunk * sound, int volume)
{
    if(sound == NULL) return;

    if(volume > 128) volume = 128;
    if(volume < 0) volume = 0;

    Mix_VolumeChunk(sound,volume);
}

/*// Pys�ytt�� ��nen
void Sound::pause(Mix_Chunk * sound)
{
    if(sound == NULL) return;

    Mix_Pause(sound);
}

// Jatkaa ��nt�
void Sound::resume(Mix_Chunk * sound)
{
    if(sound == NULL) return;

    Mix_Resume(sound);
}

// Lopettaa ��nen
void Sound::stop(Mix_Chunk * sound)
{
    if(sound == NULL) return;

    Mix_HaltChannel(sound);
}

// H�ivytt�� ��nen time:n nopeudella
void Sound::fadeOut(Mix_Chunk * sound, int time)
{
    if(sound == NULL) return;

    Mix_FadeOutChannel(sound,time)
}*/

