#ifndef VEC2_HPP
#define VEC2_HPP

//Vec 2 class definition
class Vec2
{
public:
	Vec2();//konstuktor deklariert
	Vec2(float a, float b);
	Vec2& operator+=(Vec2 const& v); // *this += v
	Vec2& operator-=(Vec2 const& v);
	Vec2& operator*=(float v);
	Vec2& operator/=(float v);
	float x;
	float y;
};

#endif // VEC2_HPP

/*int main(int argc, char const *argv[])
{
	Vec2 jonas{2.0f, 3.0f};

	Vec2 michael;
	
ganz viel code
	
	michael.x = 5.0f;

	return 0;
}*/