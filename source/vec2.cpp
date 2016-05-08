#include "vec2.hpp"
Vec2::Vec2():
x{0},
y{0} {}

Vec2::Vec2(float a, float b):
x{a}, y{b}
{}

Vec2& Vec2::operator+=(Vec2 const& v){
	x += v.x;
	y += v.y;
	return *this;

}
Vec2& Vec2::operator-=(Vec2 const& v){
	x -= v.x;
	y -= v.y;
	return *this;
}
Vec2& Vec2::operator*=(float v){
	x*= v;
	y*= v;
	return *this;
}
Vec2& Vec2::operator/=(float v){
	x/= v;
	y/= v;
	return *this;
}
Vec2 operator+( Vec2 const & u , Vec2 const & v ){
	Vec2 E;
	E.x=u.x+v.x;
	E.y=u.y+v.y;
	return E;
}
Vec2 operator-( Vec2 const & u , Vec2 const & v ){
	Vec2 E;
	E.x=u.x-v.x;
	E.y=u.y-v.y;
	return E;
}
Vec2 operator *(Vec2 const& v, float s){
	Vec2 E;
	E.x=v.x*s;
	E.y=v.y*s;
	return E;

}
Vec2 operator /(Vec2 const& v, float s){
	Vec2 E;
	E.x=v.x/s;
	E.y=v.y/s;
	return E;

}
Vec2 operator *( float s, Vec2 const & v){
	Vec2 E;
		E.x=s*v.x;
		E.y=s*v.y;
		return E;
}
