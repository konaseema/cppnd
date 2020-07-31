#include <iostream>
using std::cout;

int main() {
  int i = 1;
  cout << "The value of is i: " << i << "\n"; 
  int &j = i;
  j = 2;
  cout << "The value of is i: " << i << "\n";
}