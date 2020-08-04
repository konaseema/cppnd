#include <iostream>
using std::cout;

int blah(int &a) { return a++; }

int main() {
  /*int i = 1;
  cout << "The value of is i: " << i << "\n";
  int &j = i;
  j = 2;
  cout << "The value of is i: " << i << "\n";*/
  int k = 1;
  int &m = k;
  cout << "The value of k is: " << blah(k) << "\n";
  cout << "The value of m is: " << m << "\n";
  return 0;
}