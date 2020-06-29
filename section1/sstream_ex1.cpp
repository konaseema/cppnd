#include <iostream> // std::cout
#include <sstream>  // std::stringstream
#include <string>   // std::string

// swapping ostringstream objects
int main() {

  std::stringstream ss;

  ss << 100 << ' ' << 200 << ' ' << 99;

  int foo, bar, baz;
  ss >> foo >> bar >> baz;

  std::cout << "foo: " << foo << '\n';
  std::cout << "bar: " << bar << '\n';
  std::cout << "baz: " << baz << '\n';

  return 0;
}