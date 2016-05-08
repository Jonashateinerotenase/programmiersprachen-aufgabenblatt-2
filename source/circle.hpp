#if !defined(CIRCLE_HPP)
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

	class Circle {
public:
	Circle();
	Circle(float r, Vec2 point);
	Circle(float r, Vec2 point, color farbe);
	float radius;
	Vec2 point;
	color farbe;
	float area() const;
	float circumrefence() const;
	void draw(Window& win);
	void draw(Window& win, color c);
	void set_radius(float r);
	float get_radius() const;
	bool isinside(Vec2 p);
};
#endif