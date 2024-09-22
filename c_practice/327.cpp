#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  vector<vector<int>> A(9, vector<int>(9));
  rep(i, 0, 9) rep(j, 0, 9) cin >> A[i][j];
  vector<vector<int>> grid{
      {0, 2},
      {3, 5},
      {6, 8},
  };

  rep(i, 0, 9)
  {
    set<int> nums;
    rep(j, 0, 9) nums.insert(A[i][j]);
    if (nums.size() != 9)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, 0, 9)
  {
    set<int> nums;
    rep(j, 0, 9) nums.insert(A[j][i]);
    if (nums.size() != 9)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, 0, 3)
  {
    rep(j, 0, 3)
    {
      set<int> nums;
      rep(iy, grid[i][0], grid[i][1] + 1)
      {
        rep(ix, grid[j][0], grid[j][1] + 1) nums.insert(A[iy][ix]);
      }
      if (nums.size() != 9)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}