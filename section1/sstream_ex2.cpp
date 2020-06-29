#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::istringstream;
using std::string;

int main() {
  string a = "a 2 3";
  istringstream my_stream(a);
  int n;
  my_stream >> n;
  cout << n + "2"
       << "\n";
}