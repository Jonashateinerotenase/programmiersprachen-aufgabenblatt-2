#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

	class Rectangle {
public:
	Rectangle();
	Rectangle(Vec2 p);
	Rectangle(Vec2 p, float breite, float hoehe);
	Rectangle(Vec2 p, float breite, float hoehe, color farbe);
	Vec2 p;
	float breite;
	float hoehe;
	color farbe;
	float area() const;
	float circumrefence() const;
	void draw(Window& win);
	float get_a() const;
	float get_b() const;
};
#endif