#include "vectoradd.h"
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int IncrementAndComputeVectorSum(vector<int> v) {
  int total = 0;
  AddOneToEach(v);

  for (auto i : v) {
    total += i;
  }
  return total;
}

void AddOneToEach(vector<int> &v) {
  // Note that the function passes a reference to v
  // and the for loop below uses references to
  // each item in v. This means the actual
  // ints that v holds will be incremented.
  for (auto &i : v) {
    i++;
  }
}

int main() {
  vector<int> v{1, 2, 3, 4};
  int total = IncrementAndComputeVectorSum(v);
  cout << "The total is: " << total << "\n";
}