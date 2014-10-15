//VECTOR METHODS

#include "ball.h"
#include <math.h>

Vector::Vector(float xx, float yy)
{
	x=xx; y=yy;
}

Vector* Vector::sub(Vector* v)
{
	Vector *vnew=new Vector(x,y);
	vnew->x-=v->x;
	vnew->y-=v->y;
	return vnew;
}

Vector* Vector::add(Vector* v)
{
	Vector *vnew=new Vector(x,y);
	vnew->x+=v->x;
	vnew->y+=v->y;
	return vnew;
}


Vector* Vector::mul(float f)
{
	Vector* newVector = new Vector(x*f, y*f);
	return newVector;

}

Vector* Vector::normalize()
{
	float distance = sqrt(x*x + y*y);
	Vector* normVector = new Vector(x/distance, y/distance);
	return normVector;
}

float Vector::dot(Vector* v2)
{
	float product=(x*v2->x) + (y*v2->y);
	return product;
}

float Vector::lengthsquared()
{
	return (x*x+y*y);
}