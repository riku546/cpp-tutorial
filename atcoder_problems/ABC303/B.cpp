#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> cob = {};
  vector<vector<int>> a(M, vector<int>(N));
  rep(i, 0, M) rep(j, 0, N) cin >> a[i][j];

  int ans = 0;

  rep(i, 1, N + 1)
  {
    rep(j, i + 1, N + 1)
    {
      bool flag = false;
      rep(m, 0, M)
      {
        rep(n, 0, N - 1)
        {
          if (a[m][n] == i && a[m][n + 1] == j)
            flag = true;
          if (a[m][n] == j && a[m][n + 1] == i)
            flag = true;
        }
      }
      if (!flag)
        ans++;
    }
  }

  cout << ans << endl;
}