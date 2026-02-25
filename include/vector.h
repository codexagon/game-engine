#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>
#include <iostream>

struct Vec2 {
	float x, y;

	Vec2 operator+(const Vec2 &other) { return {x + other.x, y + other.y}; }
	Vec2 operator-(const Vec2 &other) { return {x - other.x, y - other.y}; }
	Vec2 operator*(const float scalar) { return {x * scalar, y * scalar}; }
	Vec2 operator/(const float scalar) { return {x / scalar, y / scalar}; }

	float magnitude() { return sqrt(x * x + y * y); }

	Vec2 normalize() {
		float m = magnitude();
		return (m > 0) ? Vec2{x / m, y / m} : Vec2{0, 0};
	}

	void print() {
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
};

#endif
