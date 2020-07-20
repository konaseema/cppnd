#include <iostream>
using std::cout;

void func(int* add) { *add = 20; }
int main() {
  int num = 10;
  func(&num);
  cout << "num is now: " << num << "\n";
}