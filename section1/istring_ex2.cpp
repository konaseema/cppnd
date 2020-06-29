#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::istringstream;
using std::string;

int main() {
  string a = "1 2 3";
  istringstream my_stream(a);
  int n;

  while (my_stream >> n) {
    cout << "The stream was successfull: " << n << "\n";
  }

  cout << "The stream failed "
       << "\n";
}