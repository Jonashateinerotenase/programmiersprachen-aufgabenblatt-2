#include "mat2.hpp"
#include "vec2.hpp"
#include <cmath>
mat2::mat2():
a_{1},
b_{0},
c_{0},
d_{1} {}

mat2::mat2(float a, float b, float c, float d):
a_{a}, b_{b}, c_{c}, d_{d}
{}
mat2 & mat2::operator *=( mat2 const & m){
	float a_x=m.a_ *a_ +m.c_ *b_;
	float b_x=m.b_ *a_ +m.d_ *b_;
	float c_x=m.a_ *c_ +m.c_ *d_;
	float d_x=m.b_ *c_ +m.d_ *d_;
	a_=a_x;
	b_=b_x;
	c_=c_x;
	d_=d_x;
	return *this;
}
float mat2::det () const{
	return a_*d_-b_*c_;
}
mat2 operator *( mat2 const & m1 , mat2 const & m2 ){
	mat2 mx;
	mx.a_=m2.a_ *m1.a_ +m2.c_ *m1.b_;
	mx.b_=m2.b_ *m1.a_ +m2.d_ *m1.b_;
	mx.c_=m2.a_ *m1.c_ +m2.c_ *m1.d_;
	mx.d_=m2.b_ *m1.c_ +m2.d_ *m1.d_;
	return mx;
}
Vec2 operator *( mat2 const & m, Vec2 const & v){
	Vec2 ergi;
	ergi.x=m.a_* v.x+ m.b_* v.y;
	ergi.y=m.c_* v.x+ m.d_* v.y;
	return ergi;
}
Vec2 operator *( Vec2 const & v, mat2 const & m){
	Vec2 ergi;
	ergi.x=v.x*m.a_+ v.y*m.b_;
	ergi.y=v.x*m.c_+ v.y*m.d_;
	return ergi;
}
mat2 inverse ( mat2 const & m){
	mat2 inv;
	inv.a_=(1/m.det())*m.d_;
	inv.b_=(1/m.det())*-1*m.b_;
	inv.c_=(1/m.det())*-1*m.c_;
	inv.d_=(1/m.det())*m.a_;
	return inv;
}
mat2 transpose ( mat2 const & m){
	mat2 transe;
	transe.a_=m.a_;
	transe.b_=m.c_;
	transe.c_=m.b_;
	transe.d_=m.d_;
	return transe;
}
mat2 make_rotation_mat2 ( float phi ){
	mat2 mrm2;
	mrm2.a_=cos(phi);
	mrm2.b_=-1*sin(phi);
	mrm2.c_=sin(phi);
	mrm2.d_=cos(phi);
	return mrm2;

}