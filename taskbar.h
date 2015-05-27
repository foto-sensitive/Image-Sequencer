

//
//  Object.h
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#ifndef emptyExample_Taskbar_h
#define emptyExample_Taskbar_h
#include "GenObj.h"
#include "ofMain.h"

class Taskbar {
public:

    //Constructor
    Taskbar();

    void draw(int num);
    void mousePressed();
    void mouseReleased();

    int thumW, thumH;

    GenObj object;
    GenObj thum[10];



};

#endif
