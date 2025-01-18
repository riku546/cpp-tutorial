#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(n));
  rep(i, 0, m)
  {
    int kc;
    cin >> kc;
    vector<int> temp(kc);
    rep(j, 0, kc) cin >> temp[j];
    rep(j, 0, kc)
    {
      rep(k, 0, kc)
      {
        if (j == k)
          continue;
        grid[temp[j] - 1][temp[k] -1]++;
      }
    }
  }

  rep(i, 0, n)
  {
    rep(j, 0, n)
    {
      if (i == j)
        continue;
      if (grid[i][j] == 0)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}