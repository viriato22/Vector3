#ifndef VECTOR3_HPP
#define VECTOR3_HPP

#include "vector3.h"

void vector3::add(const vector3& secondvector) {
	x += secondvector.x;
	y += secondvector.y;
	z += secondvector.z;
}

vector3 vector3::clamp(vector3 vector, const vector3& min, const vector3& max) {

	if (vector.x < min.x) {
		vector.x = min.x;
	}
	if (vector.y < min.y) {
		vector.y = min.y;
	}
	if (vector.z < min.z) {
		vector.z = min.z;
	}

	if (vector.x > max.x) {
		vector.x = max.x;
	}
	if (vector.y > max.y) {
		vector.y = max.y;
	}
	if (vector.z > max.z) {
		vector.z = max.z;
	}

	return vector;
}

void vector3::clamp(vector3& vector, const vector3& min, const vector3& max) {

	if (vector.x < min.x) {
		vector.x = min.x;
	}
	if (vector.y < min.y) {
		vector.y = min.y;
	}
	if (vector.z < min.z) {
		vector.z = min.z;
	}

	if (vector.x > max.x) {
		vector.x = max.x;
	}
	if (vector.y > max.y) {
		vector.y = max.y;
	}
	if (vector.z > max.z) {
		vector.z = max.z;
	}

	return vector;
}

#endif
