#include <iostream>
using std::cout;

void addOne(int *&a) { cout << "The new value of a is: " << a++ << "\n"; }

int main() {
  int a;
  cout << "a initially is: " << a << "\n";
  addOne(a);
  cout << "a is now: " << a << "\n";
}