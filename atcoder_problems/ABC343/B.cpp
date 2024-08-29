#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  vector<vector<int>> temp(N);
  rep(i, N) rep(j, N) cin >> A[i][j];

  rep(i, N) rep(j, N)
  {
    if (A[i][j] == 1)
    {
      temp[i].push_back(j + 1);
    }
  };

  rep(i, N)
  {
    rep(j, temp[i].size())
    {
      cout << temp[i][j] << " ";
    }
    cout << endl;
  }
}