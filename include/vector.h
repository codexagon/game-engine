#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vec2 {
	private:
		float x, y;
	
	public:
		Vec2(int x, int y) {
			this->x = x;
			this->y = y;
		};

		int getX();
		int getY();
		float magnitude();
		Vec2 add(Vec2 other);
		Vec2 scale(float k);
		float dot(Vec2 other);
		void print();
};

#endif
