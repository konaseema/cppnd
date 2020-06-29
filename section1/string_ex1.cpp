#include <iostream>
#include <string>
using std::cout;
using std::string;

// Write the PrintStrings function here.

string PrintStrings(const string a, const string b) {
  string c = "";
  for (int i = 0; i < a.length(); i++) {
    c += a[i];
  }

  for (int i = 0; i < b.length(); i++) {
    c += b[i];
  }
  return c;
}

int main() {
  string s1 = "C++ is ";
  string s2 = "super awesome.";

  // Uncomment the following line to call your function:
  cout << PrintStrings(s1, s2)<<"\n";
}