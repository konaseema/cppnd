#include <iostream>

int main() {
  int x = 1;
  int y = 2;
  const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << "x delta " << x + delta[i][j] << " y delta "
                << y + delta[i][j];
      /*std::cout << "i " << i << " j " << j << " " << delta[i][j] << "\n";*/
    }
  }
}