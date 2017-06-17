#pragma once
#include "Vector2D.h"

class Object
{
protected:
	float red, green, blue;
	Vector2 position;
public:
	Object();
	virtual ~Object();
	Vector2 GetPos();
	void SetPos(Vector2);
};

