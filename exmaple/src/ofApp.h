#pragma once

#include "ofMain.h"
#include "ofxSingleton.h"

class Klass final : public Singleton<Klass>
{
public:
	Klass(token) { ofLog() << "constructed"; }
	~Klass() { ofLog() << "destructed"; }

	void use(const int a) const { ofLog() << "in use : " << a; };
};

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
