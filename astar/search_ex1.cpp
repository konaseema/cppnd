#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::abs;
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class State { kEmpty, kObstacle };

vector<State> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<State> row;
  while (sline >> n >> c && c == ',') {
    if (n == 0) {
      row.push_back(State::kEmpty);
    } else {
      row.push_back(State::kObstacle);
    }
  }
  return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile(path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

// Heurisitic search function
int Heuristic(int x1, int y1, int x2, int y2) {
  return abs(x2 - x1) + abs(y2 - y1);
}

// TODO: Write the AddToOpen function here
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &open,
               vector<vector<State>> &grid) {

  vector<int> new_node = {x, y, g, h};
  open.push_back(new_node);
  grid[x][y] = State::kClosed;
}

// TODO: Write the Search function stub here.
vector<vector<State>> Search(vector<vector<State>> board, const int init[2],
                             const int goal[2]) {
  cout << "No path found!"
       << "\n";
  return std::vector<vector<State>>{};
}

string CellString(State cell) {
  switch (cell) {
  case State::kObstacle:
    return "⛰️   ";
  default:
    return "0   ";
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Declare "init" and "goal" arrays with values {0, 0} and {4, 5}
  // respectively.
  auto board = ReadBoardFile("1.board");

  int init[2] = {0, 1};
  int goal[2] = {4, 5};
  vector<vector<State>> solution = Search(board, init, goal);
  // TODO: Call Search with "board", "init", and "goal". Store the results
  // in the variable "solution".
  // TODO: Change the following line to pass "solution" to PrintBoard.
  PrintBoard(solution);
}
