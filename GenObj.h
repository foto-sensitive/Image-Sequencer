

//
//  Object.h
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#ifndef emptyExample_GenObj_h
#define emptyExample_GenObj_h
#include "ofMain.h"

class GenObj {
public:

    //Constructor
    GenObj();

    void draw();
    void mousePressed();
    void mouseReleased();
    bool isOver();
    bool sel;
    ofColor c;

    float x,y,w,h,centX, centY;
    string name;




};

#endif
