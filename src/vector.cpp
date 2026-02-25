#include <cmath>

#include "../include/vector.h"

int Vec2::getX() {
	return x;
}

int Vec2::getY() {
	return y;
}

float Vec2::magnitude() {
	return sqrt(x * x + y * y);
}

Vec2 Vec2::add(Vec2 other) {
	return Vec2(x + other.getX(), y + other.getY());
}

Vec2 Vec2::scale(float k) {
	return Vec2(x * k, y * k);
}

float Vec2::dot(Vec2 other) {
	return (x * other.getX()) + (y * other.getY());
}

void Vec2::print() {
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}
