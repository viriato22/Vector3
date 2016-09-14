#ifndef VECTOR3_H
#define VECTOR3_H

class vector3 {
public: //values
	float x, y, z;

public: //constructors & destructors
	vector3(float x, float y, float z) : x(x), y(y), z(z) {}
	vector3() : x(0.0), y(0.0), z(0.0) {}
	vector3(const vector3& aux) : x(aux.x), y(aux.y), z(aux.z) {}

	~vector3(){}

public: //public functions
	void add(const vector3& secondvector);
	vector3 clamp(const vector3& vector, const vector3& min, const vector3& max);
	void clamp(const vector3& vector, const vector3& min, const vector3& max);
};

#include "vector3.hpp"

#endif