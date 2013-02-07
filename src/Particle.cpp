#include "Particle.h"

Particle::Particle()
{
	x = ofRandomf();
	y = ofRandomf();
	speedX = ofRandom(0,4);
	speedY = ofRandom(0,4);
	radius = ofRandom(0,4);
	color = ofRandom(0, 0xff0000);

	age = 0;
	dead = false;
	maxAge = ofRandom(0, 50)+250;
}

void Particle::update()
{
	age++;
	x += (x>0) ? speedX : speedX*-1;
	y += (y>0) ? speedY : speedY*-1;
	if (age >= maxAge) dead = true;
}

void Particle::draw()
{
	ofSetColor(color);
	ofCircle(x, y, radius);
}
