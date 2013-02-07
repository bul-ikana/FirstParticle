#ifndef _EMITTER
#define _EMITTER

#include "ofMain.h"
#include "Particle.h"
#define size 5000

class ParticleEmitter : public ofBaseApp{

	private:

	int centerX;
	int centerY;
	float rotation;

	public:

	void setup();
	void update();
	void draw();

	Particle* p[size];
};
#endif
