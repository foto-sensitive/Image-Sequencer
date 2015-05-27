#pragma once

#include "ofMain.h"
#include "help.h"


//Add-Ons/////////////////////
#include "ofxSecondWindow.h"
#include "ofxPostGlitch.h"
#include "ofxGifDecoder.h"
#include "ofxGifFile.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void taskBind(int key);
		string toString(float i);


        help *helpMe;
        help *helpBg;
        bool helpOn;

        ofImage bg;

        int pathNum;

        ofDirectory index;





};
