#pragma	once
#include "Planet.h"
#include "Interaction.h"
#include "Sphere.h"
#include "Ship.h"
#include <time.h>
#include <math.h>
#include "ETSIDI.h"
#include "glut.h"


class World
{
	Sphere sun;
	Ship *ship;
	Planet earth, mars, venus, mercury;
	Planet moon;
	Vector2 z;
	float x_eye, y_eye, z_eye;
	float theta, d;
	bool sloMo;

public:

	World();
	virtual ~World();

	void Initialize();
	void Draw();
	void Timer();
	void Key(unsigned char key, int x_t, int y_t);
};

