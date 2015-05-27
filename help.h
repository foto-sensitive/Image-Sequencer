

//
//  Object.h
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#ifndef emptyExample_help_h
#define emptyExample_help_h

#include "Taskbar.h"
#include "ofMain.h"

class help {
public:

    //Constructor
    help(string path_, int limit_, float multX_, float multY_);

    float multX, multY;

    void draw();

    void load(string path);
    void preLoad(string path);

    vector<ofImage> imgs1;
    vector<ofImage> imgs2;

    string toString(int i);

    int state, time, limit, imgW, imgH;
    int cntrX1, cntrY1, cntrX2, cntrY2;
    int p1,p2,p3,p4;

    vector <float> cntrXs;
    vector <float> cntrYs;

    float rat;

    ofDirectory dir;



};

#endif
