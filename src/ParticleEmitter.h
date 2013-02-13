#ifndef _EMITTER
#define _EMITTER

#include "ofMain.h"
#include "Particle.h"
#define size 5000

class ParticleEmitter : public ofBaseApp{

	private:

	float rotation;

	public:

    int x;
    int y;

	void setup();
	void update();
	void draw();

	Particle* p[size];
};
#endif
