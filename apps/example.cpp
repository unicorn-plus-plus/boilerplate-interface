#include <TBR_NAMESPACE/SimpleClass.hpp>
#include <iostream>

using namespace TBR_NAMESPACE;

int main(int argc, char const *argv[]) {
  SimpleClass<int> simple;
  simple.setNumber(100);
  std::cout << simple.getNumber();
}
