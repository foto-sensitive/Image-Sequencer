









//  Taskbar.cpp
//  emptyExample
//
//  Created by Robert Pavlovskis on 27/01/2015.
//
//

#include "Taskbar.h"
#include "ofMain.h"

Taskbar::Taskbar(){

  for(int i = 0; i < 10; i++){
  thum[i].x = ofGetWindowWidth()*0.1 + (ofGetWindowWidth() * 0.0875)*i;

  thum[i].w = ofGetWindowWidth() * 0.075;
  thum[i].h = ofGetWindowHeight()*0.066;
    thumW= ofGetWindowWidth() * 0.075;
  thumH = ofGetWindowHeight()*0.066;
}



}

void Taskbar::draw(int num){

  object.x = ofGetWindowWidth()*0.5;

  object.w = ofGetWindowWidth();
  object.h = ofGetWindowHeight()*0.065;

    for(int i = 0; i < 10; i++){
  thum[i].y  = object.y;

}

  ofSetColor(255);
  ofNoFill();
  //object.draw();



   ofSetColor(0,0,255);
   ofFill();
  for(int i = 0; i < 10; i++){
        if(num == i){
             thum[i].w =  thumW*1.325;
             thum[i].h =  thumH*1.325;
        }else{
             thum[i].w =  thumW;
             thum[i].h =  thumH;
        }
    thum[i].draw();
  }





}

void Taskbar::mousePressed(){




}


void Taskbar::mouseReleased(){


}


