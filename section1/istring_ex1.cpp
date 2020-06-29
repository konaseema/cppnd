#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::istringstream;
using std::string;

int main() {
  string a("199 2 3");

  istringstream my_stream(a);

  int n, p, q;
  my_stream >> n >> p >> q;
  cout << n << p << q << "\n";
}