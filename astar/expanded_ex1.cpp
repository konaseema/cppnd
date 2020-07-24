
#include <vector>
using std::vector;

void ExpandNeighbors(const vector<int> &current_node, int goal[2],
                     vector<vector<int>> &open, vector<vector<State>> &grid) {

  int x = current_node[0];
  int y = current_node[1];
  int g = current_node[2];

  const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
  for (int i = 0; i < 4; i++) {
    int a = x + delta[i][0];
    int b = y + delta[i][1];
    if (CheckValidCell(a, b, grid)) {
      int g1 = g + 1;
      int h = Heuristic(a, b, goal[0], goal[1]);
      AddToOpen(a, b, g1, h, open, grid);
    }
  }
}

/*void ExpandNeighbors(const vector<int> &current, int goal[2],
vector<vector<int>> &openlist, vector<vector<State>> &grid) {
  // Get current node's data.
  int x = current[0];
  int y = current[1];
  int g = current[2];

  // Loop through current node's potential neighbors.
  for (int i = 0; i < 4; i++) {
    int x2 = x + delta[i][0];
    int y2 = y + delta[i][1];

    // Check that the potential neighbor's x2 and y2 values are on the grid and
not closed. if (CheckValidCell(x2, y2, grid)) {
      // Increment g value and add neighbor to open list.
      int g2 = g + 1;
      int h2 = Heuristic(x2, y2, goal[0], goal[1]);
      AddToOpen(x2, y2, g2, h2, openlist, grid);
    }
  }
}*/
