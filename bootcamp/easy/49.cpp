#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> a(H, vector<char>(W));
  rep(i, 0, H) rep(j, 0, W) cin >> a[i][j];

  rep(i, 0, W + 2) cout << '#';
  cout << endl;

  rep(i, 0, H)
  {
    cout << '#';
    rep(j, 0, W) cout << a[i][j];
    cout << '#' << endl;
  }

  rep(i, 0, W + 2) cout << '#';
  cout << endl;
}