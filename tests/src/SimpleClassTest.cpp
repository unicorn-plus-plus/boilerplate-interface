#include <TBR_NAMESPACE/SimpleClass.hpp>
#include <catch2/catch.hpp>

using namespace TBR_NAMESPACE;

TEST_CASE("SimpleClass SimpleClass()", "[simple]") {
  SimpleClass<int> simple;
  REQUIRE(simple.getNumber() == 0);
}

TEST_CASE("SimpleClass setNumber(int _number)", "[simple]") {
  SimpleClass<int> simple;
  simple.setNumber(1);
  REQUIRE(simple.getNumber() == 1);
}