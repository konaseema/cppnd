#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;

// TODO: Add the ReadBoardFile function here.
void ReadBoard(const string file_loc) {
  ifstream my_file;
  my_file.open(file_loc);
  if (my_file) {
    string line;
    while (getline(my_file, line)) {
      cout << line << "\n";
    }
  }
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  ReadBoard("1.board");
  // Leave the following line commented out.
  // PrintBoard(board);
}