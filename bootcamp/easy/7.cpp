#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  vector<vector<int>> A(3, vector<int>(3));
  int N;
  vector<vector<int>> board(3, vector<int>(3, 0));

  rep(i, 0, 3) rep(j, 0, 3) cin >> A[i][j];
  cin >> N;

  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    rep(j, 0, 3) rep(k, 0, 3)
    {
      if (A[j][k] == temp)
        board[j][k] = 1;
    }
  }

  rep(i, 0, 3)
  {
    if (board[0][i] == 1 && board[0][i] == board[1][i] && board[1][i] == board[2][i])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  rep(i, 0, 3)
  {
    if (board[i][0] == 1 && board[i][0] == board[i][1] && board[i][1] == board[i][2])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (board[0][0] == 1 && board[0][0] == board[1][1] && board[1][1] == board[2][2])
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (board[0][2] == 1 && board[0][2] == board[1][1] && board[1][1] == board[2][0])
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}