#include "ParticleEmitter.h"

void ParticleEmitter::setup()
{
    ofSetFrameRate(100);
    ofBackground(0, 0, 0);
    ofHideCursor();
    ofEnableSmoothing();
    centerX = ofGetScreenWidth() / 2;
    centerY = ofGetScreenHeight() / 2;
    rotation = 0;
    for (int i=0; i<size; i++) p[i] = new Particle();
}

void ParticleEmitter::update()
{
    for (int i=0; i<size; i++) {
        p[i]->update();
	if (p[i]->dead==true) {
	    delete p[i];
	    p[i] = new Particle();
	}
    }
    rotation+=.05;
}

void ParticleEmitter::draw()
{
    ofTranslate(centerX, centerY);
    ofRotate(rotation);
    for (int i=0; i<size; i++) p[i]->draw();
}
