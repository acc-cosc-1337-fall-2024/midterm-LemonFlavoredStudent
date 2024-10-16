#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Verify get_cookie_ingredients")
{
	vector<double> ingredients= get_cookie_ingredients(96);
	REQUIRE(ingredients[0]==3);
	REQUIRE(ingredients[1]==2);
	REQUIRE(ingredients[2]==5.5);
	ingredients= get_cookie_ingredients(48);
	REQUIRE(ingredients[0]==1.5);
	REQUIRE(ingredients[1]==1);
	REQUIRE(ingredients[2]==2.75);
	ingredients= get_cookie_ingredients(24);
	REQUIRE(ingredients[0]==.75);
	REQUIRE(ingredients[1]==.5);
	REQUIRE(ingredients[2]==1.375);
}