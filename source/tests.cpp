#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE (" vec2 ", "[kauderwelsch]")
{
	Vec2 v1;
	REQUIRE(v1.x == 0.0f);
	REQUIRE(v1.y == 0.0f);
	Vec2 v2{1.08f, 32.083f};
	REQUIRE(v2.x == 1.08f);
	REQUIRE(v2.y == 32.083f);
}

TEST_CASE (" vec2operator+=", "[kauderwelsch]")
{
	Vec2 v1{1.04f, 2.028f};
	Vec2 v2{1.08f, 32.083f};
	v1+=v2;
	REQUIRE (v1.x == Approx(2.12f));
	REQUIRE (v1.y == Approx(34.111f));
}
TEST_CASE (" vec2operator-=", "[kauderwelsch]")
{
	Vec2 v1{1.04f, 2.028f};
	Vec2 v2{1.08f, 32.083f};
	v1-=v2;
	REQUIRE (v1.x == Approx(-0.04f));
	REQUIRE (v1.y == Approx(-30.055f));
}
TEST_CASE (" vec2operator*=", "[kauderwelsch]")
{
	Vec2 v1{1.04f, 2.028f};
	float v = 2.0f;
	v1*=v;
	REQUIRE (v1.x == Approx(2.08f));
	REQUIRE (v1.y == Approx(4.056f));
}
TEST_CASE (" vec2operator/=", "[kauderwelsch]")
{
	Vec2 v1{1.04f, 2.028f};
	float v = 2.0f;
	v1/=v;
	REQUIRE (v1.x == Approx(0.52f));
	REQUIRE (v1.y == Approx(1.014f));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
