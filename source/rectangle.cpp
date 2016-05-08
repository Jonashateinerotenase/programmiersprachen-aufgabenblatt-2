#include "rectangle.hpp"
#include "vec2.hpp"
#include "window.hpp"
#include <iostream>

Rectangle::Rectangle():
	p{50,50},breite{50},hoehe{50}{}
	
Rectangle::Rectangle(Vec2 p_):
	p{p_},
	breite{50},
	hoehe{50},
	farbe{0,0,0}{}
Rectangle::Rectangle(Vec2 p_, float b, float h):
	p{p_},
	breite{b},
	hoehe{h},
	farbe{0,0,0}{}
Rectangle::Rectangle(Vec2 p_, float b, float h, color farbe_):
	p{p_},
	breite{b},
	hoehe{h},
	farbe{farbe_}{}
float Rectangle::area() const{
 	return breite*hoehe;
}
float Rectangle::circumrefence() const{
	return 2*breite+2*hoehe;
}
float Rectangle::get_a() const{
	return breite;
}
float Rectangle::get_b() const{
	return hoehe;
}
void Rectangle::draw(Window& win)
{
	win.draw_line(p.x, p.y,
                  breite + p.x, p.y, 
                  farbe.x_,farbe.y_,farbe.z_);

    win.draw_line(breite+p.x, p.y,
                  breite+p.x, hoehe+p.y, 
                  farbe.x_,farbe.y_,farbe.z_);

    win.draw_line(breite+p.x, hoehe+p.y,
                  p.x, hoehe+p.y, 
                  farbe.x_,farbe.y_,farbe.z_);

    win.draw_line(p.x, hoehe+p.y,
                  p.x, p.y, 
                  farbe.x_,farbe.y_,farbe.z_);
}
void Rectangle::draw(Window& win, color c1){
	win.draw_line(p.x, p.y,
                  breite + p.x, p.y, 
                  c1.x_,c1.y_,c1.z_);

    win.draw_line(breite+p.x, p.y,
                  breite+p.x, hoehe+p.y, 
                  c1.x_,c1.y_,c1.z_);

    win.draw_line(breite+p.x, hoehe+p.y,
                  p.x, hoehe+p.y, 
                  c1.x_,c1.y_,c1.z_);

    win.draw_line(p.x, hoehe+p.y,
                  p.x, p.y, 
                  c1.x_,c1.y_,c1.z_);

}
bool Rectangle::isinside(Vec2 q)
{
	if(q.x>=p.x and q.y>=p.y and q.x<=p.x+breite and q.y<=p.y+hoehe) return true;
	else return false;
}