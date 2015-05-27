









//  Object.cpp
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#include "GenObj.h"
#include "ofMain.h"

GenObj::GenObj(){

   c = ofColor(255,255,255);
}

void GenObj::draw(){

    //Positioning
    ofPushMatrix();
    ofTranslate(x,y);



    ofSetRectMode(OF_RECTMODE_CENTER);

    ofSetColor(c);

    if(isOver()){
            ofFill();
            ofRect(0,0,w,h);

    }else{
            ofNoFill();
            ofRect(0,0,w,h);
    }


    ofFill();

    ofPopMatrix();



}

void GenObj::mousePressed(){




}


void GenObj::mouseReleased(){


}



bool GenObj::isOver(){
    if(ofGetMouseX() > x-w/2 && ofGetMouseX() < x+w/2 && ofGetMouseY() > y-h/2 && ofGetMouseY() < y+h/2){
        return true;
    }else{
        return false;
    }
}
