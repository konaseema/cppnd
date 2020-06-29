#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream my_file;
  my_file.open("test.txt");
  if (my_file) {
    std::cout << "File was opened succesfully"
              << "\n";
  }
}