









//  Object.cpp
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#include "help.h"
#include "ofMain.h"

help::help(string path_, int limit_, float multX_, float multY_){

    multX = multX_;
    multY = multY_;
    limit = limit_;

    load(path_);

}

void help::draw(){

            cntrXs.clear();

    for (int i = 0; i < multX; i++) {
      float cntrX;
      float f = 1;
      float divideX = f/(multX+1);
      cntrX = ofGetWindowWidth()*((i+1)*divideX);
      cntrXs.push_back(cntrX);
    }

    cntrYs.clear();
    for (int i = 0; i < multY; i++) {
      float cntrY;
      float f = 1;
      float divideY = f/(multY+1);
      cntrY = ofGetWindowHeight()*((i+1)*divideY);
      cntrYs.push_back(cntrY);
    }


    for(int i = 0; i < (int)dir.size(); i++){

       if(state == i){
           rat = imgs1[i].getWidth() / imgs1[i].getHeight();
           imgW = ofGetWindowHeight()*rat/(multX/1.25);
           imgH = ofGetWindowHeight()/(multX/1.25);

           for(int u = 0; u < multY; u++){
              for(int j = 0; j < multX; j++){

              p1 = cntrXs[j]-imgW/2;
              p2 = cntrYs[u]-imgH/2;
              p3 = imgW;
              p4 = imgH;

              if(cntrXs[j] > ofGetWindowWidth()/2){
                 p1 = cntrXs[j]+imgW/2;
                 p3 = -imgW;
              }

              if(cntrYs[u] > ofGetWindowHeight()/2){
                 p2 = cntrYs[u]+imgH/2;
                 p4 = -imgH;
              }
              ofPushMatrix();
              ofTranslate(p1, p2);
              imgs1[i].draw(0,0, p3, p4);
              ofPopMatrix();


             }
           }
        }
    }

    time++;
    if(time > limit){
        state++;
        if(state > (int)dir.size()){
            state = 0;
        }
        time = 0;
    }


}

//Converts integers to strings
string help::toString(int i){
    string Result;          // string which will contain the result
    ostringstream convert;   // stream used for the conversion
    convert << i;      // insert the textual representation of 'Number' in the characters in the stream
    Result = convert.str(); // set 'Result' to the contents of the stream
    return Result;
}

void help::load(string path){

    dir.listDir(path);
    dir.sort();

    imgs1.clear();
    for (int i = 0; i < (int)dir.size(); i++) {
      ofImage img;
      img.loadImage(dir.getPath(i));
      imgs1.push_back(img);
    }
    cntrY1 = ofGetWindowHeight()/2;
	state = 0;

}

void help::preLoad(string path){

    dir.listDir(path);
    dir.sort();

    imgs2.clear();
    for (int i = 0; i < (int)dir.size(); i++) {
      ofImage img;
      img.loadImage(dir.getPath(i));
      imgs2.push_back(img);
    }
    cntrY1 = ofGetWindowHeight()/2;
	state = 0;

}


