#include "circle.hpp"
#include <iostream>
#include "vec2.hpp"
#include "color.hpp"
#include <math.h>
#include "window.hpp"
Circle::Circle():
	radius{100},
	point{100, 100},
	farbe{0,0,0} {}
Circle::Circle(float r, Vec2 point):
	radius{r},
	point{point},
	farbe{}{}
Circle::Circle(float r, Vec2 point, color farbe):
	radius{r},
	point{point},
	farbe{farbe.x_, farbe.y_, farbe.z_}{}

void Circle::set_radius(float r){
	radius =r;
}
float Circle::get_radius() const{
 return radius;
}
float Circle::area() const{
	return 3.14159265359*radius*radius;

}
float Circle::circumrefence() const{
	return 2*radius*3.14159265359;
}
void Circle::draw(Window& win)
{
	for(float i=0.0;i<2*3.14159265359;i+=0.0005)
	{
		win.draw_point(point.x+radius*cos(i), point.y+radius*sin(i)
			, farbe.x_, farbe.y_, farbe.z_);
	}
}
void Circle::draw(Window& win, color c1) 
{
	for(float i=0.0;i<2*3.14159265359;i+=0.0005)
	{
		win.draw_point(point.x+radius*cos(i), point.y+radius*sin(i)
			, c1.x_, c1.y_, c1.z_);
	}

}
bool Circle::isinside(Vec2 p)
{
	if(sqrt( (p.x-point.x)*(p.x-point.x) + (p.y-point.y)*(p.y-point.y)  )<radius ) return true;
	else return false;
}