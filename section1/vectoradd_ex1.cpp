#include <iostream>
#include <vector>

using std::cout;
using std::vector;

vector<int> AdditionFunction(vector<int> a, vector<int> b) {
  for (int i = 0; i < a.size(); i++) {
    a[i] += b[i];
  }
  return a;
}

int vectorSum(vector<int> a) {
  int c = 0;
  for (int i : a) {
    c += i;
  }
  return c;
}

int main() {
  vector<int> a{1, 1, 1};
  vector<int> b{1, 1, 1};
  vector<int> c = AdditionFunction(a, b);

  for (auto i : c) {
    cout << i << "\n";
  }

  int d = vectorSum(a);
  cout << "vector sum is: " << d<<"\n";
}