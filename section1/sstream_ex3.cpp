#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::istringstream;
using std::string;

int main() {
  string b = "1,2,3";
  istringstream my_stream(b);
  char c;
  int n;
  while (my_stream >> n >> c) {
    cout << "The stream was successfull: " << n << " " << c << "\n";
  }
  cout << "The stream failed"
       << "\n";
}
