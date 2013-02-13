#include "Particle.h"

Particle::Particle()
{
	x = ofRandomf();
	y = ofRandomf();
	speedX = ofRandom(0,8);
	speedY = ofRandom(0,8);
	radius = ofRandom(0,15);
	color = ofRandom(0, 0xff0000);

	age = 0;
	dead = false;
	maxAge = ofRandom(0, 300);
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
	ofSetHexColor(color);
	ofCircle(x, y, radius);
}
