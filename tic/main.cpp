#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  vector<vector<int>> board = {
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0},
  };

  rep(i, 0, board.size())
  {
    rep(j, 0, board.size()) cout << board[i][j] << ' ';
    cout << endl;
  }
}