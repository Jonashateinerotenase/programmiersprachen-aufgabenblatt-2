#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "mat2.hpp"

TEST_CASE (" mat2 ", "[kauderwelsch]")
{
	mat2 m1;
	REQUIRE(m1.a == 1.0f);
	REQUIRE(m1.b == 0.0f);
	REQUIRE(m1.c == 0.0f);
	REQUIRE(m1.d == 1.0f);
	mat2 m2{1.0f,2.0f,3.0f,4.0f};
	REQUIRE(m2.a == 1.0f);
	REQUIRE(m2.b == 2.0f);
	REQUIRE(m2.c == 3.0f);
	REQUIRE(m2.d == 4.0f);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}