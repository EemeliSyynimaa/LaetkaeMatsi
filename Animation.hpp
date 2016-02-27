#ifndef __ANIMATION_HPP__
#define __ANIMATION_HPP__

#include"SDL.h"

// Luokka animaatioiden k�sittelyyn
class Animation
{
    public:

    // Nykyinen kehysrivi
    int curRowFrame;

    // Nykyinen kehyssarake
    int curColFrame;

    // Kehyksen lis�ysmuuttuja
    int frameInc;

    // Kehysten v�linen aika millisekunteina
    int frameRate;

    // Viime p�ivityskerta
    float oldTime;

    // Pl��h
    float runTime;

    // Kehyksen koko
    int frameWidth;
    int frameHeight;

    // Rivien m��r�
    int numRowFrames;

    // Sarakkeiden m��r�
    int numColFrames;

    // K�yk� efekti
    bool oscillate;

    // K�yk� animaatio
    bool animating;

    //Konstruktori
    Animation();

    // Metodit
    void update();
    void pause();
    void unpause();
    int getRowFrame();
    int getColFrame();
};

#endif
