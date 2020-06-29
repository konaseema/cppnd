#include <iostream>
using std::cout;

int main() {
  int i = 0;

  while (i <= 10) {
    if (i % 2 == 0) {
      cout << "The value of i is: " << i << "\n";
    }
    i++;
  }

  cout << "I is now: " << i << "\n";
}