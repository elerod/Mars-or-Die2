#pragma once
#include "Vector2D.h"
#include "Planet.h"
#include "MovingObject.h"
#include "glut.h"
#include "ETSIDI.h"


class Ship : public MovingObject
{
	float d;//= sqrt(pow(position.x, 2) + pow(position.y, 2));
	float radius,t;
	Vector2 m, planetO;
	bool orbit;

public:

	Ship();
	virtual ~Ship();

	void Draw();
	void Move();
	void GetAV(Vector2);
	void OrbitAround(Vector2);

	void SetT(float t);
	float GetT();

	void SetOrbit(bool);
	bool GetOrbit();
};

