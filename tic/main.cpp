#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int print_board(vector<vector<int>> board)
{

  rep(i, 0, board.size())
  {
    rep(j, 0, board.size())
    {
      if (board[i][j] == 0)
        cout << '-' << ' ';
      else if (board[i][j] == 1)
        cout << 'o' << ' ';
      else if (board[i][j] == 2)
        cout << 'x' << ' ';
    }
    cout << endl;
  }
}

bool first_turn(vector<vector<int>> board)
{

  rep(i, 0, board.size()) rep(j, 0, board.size())
  {
    if (board[i][j] != 0)
      return false;
  }
  return true;
}

bool finish_game(vector<vector<int>> board)
{
  if (first_turn(board))
    return false;

  rep(x, 0, board.size())
  {
    if (board[0][x] != 0 && board[0][x] == board[1][x] && board[1][x] == board[2][x])
    {
      return true;
    }
  }

  rep(y, 0, board.size())
  {
    if (board[y][0] != 0 && board[y][0] == board[y][1] && board[y][1] == board[y][2])
    {
      return true;
    }
  }

  if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    return true;
  if (board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    return true;

  return false;
}

int main()
{

  vector<vector<int>> board = {
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0},
  };
  int turn = 1;

  print_board(board);

  while (!finish_game(board))
  {
    int x, y;
    cin >> y >> x;
    board[y][x] = turn;
    cout << "-------------------------" << endl;
    print_board(board);
    turn = 3 - turn;
  }

  cout << "-------------------------" << endl;
  cout << "winner" << ' ';
  turn == 1 ? cout << 'x' : cout << 'o';
}