#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"
#include <cmath>
// Mat2 class definition
class mat2
{
 public:
	mat2();//defaultkonstuktor deklariert
	mat2(float a, float b, float c, float d);
	float det () const ;
	float a_;
	float b_;
	float c_;
	float d_;
	mat2 & operator *=( mat2 const & m);
};
mat2 operator *( mat2 const & m1 , mat2 const & m2 );
Vec2 operator *( mat2 const & m, Vec2 const & v);
Vec2 operator *( Vec2 const & v, mat2 const & m);
mat2 inverse ( mat2 const & m);
mat2 transpose ( mat2 const & m);
mat2 make_rotation_mat2 ( float phi );

#endif // MAT2_HPP