#include <fstream>
#include <iostream>
#include <string>

using std::ifstream;
using std::string;

int main() {
  ifstream my_file;
  my_file.open("test.txt");
  if (my_file) {
    std::cout << "The file opened"
              << "\n";
    std::string line;
    while (getline(my_file, line)) {
      std::cout << line << "\n";
    }
  }
}