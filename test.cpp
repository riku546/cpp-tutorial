#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, 0, n) rep(j, 0, m) cin >> a[i][j];
  ll ans = 0;

  rep(i, 0, m)
  {
    rep(j, i + 1, m)
    {
      ll temp = 0;
      rep(k, 0, n)
      {
        temp += (ll)max(a[k][i], a[k][j]);
      }
      ans = max(ans, temp);
    }
  }
  cout << ans << endl;
}