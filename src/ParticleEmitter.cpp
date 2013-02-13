#include "ParticleEmitter.h"

float xPos;
float yPos;

void ParticleEmitter::setup()
{
    ofSetFrameRate(60);
    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    xPos = ofGetScreenWidth() / 2;
    yPos = ofGetScreenHeight() / 2;
    rotation = 0;
    for (int i=0; i<size; i++) p[i] = new Particle();
}

void ParticleEmitter::update()
{

    xPos += ( mouseX - xPos )*0.05;
    yPos += ( mouseY - yPos )*0.05;

    for (int i=0; i<size; i++) {
        p[i]->update();
	if (p[i]->dead==true) {
	    delete p[i];
	    p[i] = new Particle();
	}
    }
    rotation+=.5;
}

void ParticleEmitter::draw()
{
    ofTranslate(xPos, yPos);
    ofRotate(rotation);
    for (int i=0; i<size; i++) p[i]->draw();

}
