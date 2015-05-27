#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(88);



   helpMe = new help("images/bullet", 10, 2, 1);
   helpBg = new help("images/ghosts2", 20, 1, 1);
   bg.loadImage("images/static/giphy0002.png");

    index.listDir("images");
    index.sort();
    cout<<index.getPath(2);

    pathNum = 0;



}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


        ofColor c;



        //c.setHsb(ofMap(ofGetMouseX(), 0, ofGetWindowWidth(), 0, 255), 255, 255);
        //ofSetColor(c);
        bg.draw(0,0,ofGetWindowWidth(),ofGetWindowHeight());
        helpBg->draw();

        c.set(255, 255, 255);
        ofSetColor(c);
        helpMe->draw();


        helpMe->multX = (int)ofMap(ofGetMouseX(), 0, ofGetWindowWidth(), 1, 20);
        helpMe->multY = (int)ofMap(ofGetMouseY(), 0, ofGetWindowHeight(), 1, 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key == '1'){
        pathNum--;
    }
    if(key == '2'){
        pathNum++;
    }


    helpMe->load(index.getPath(pathNum));





}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){








}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

//##################################################################################################


//Converts integers to strings
string ofApp::toString(float i){
    string Result;          // string which will contain the result
    ostringstream convert;   // stream used for the conversion
    convert << i;      // insert the textual representation of 'Number' in the characters in the stream
    Result = convert.str(); // set 'Result' to the contents of the stream
    return Result;
}


void ofApp::taskBind(int key){


}
