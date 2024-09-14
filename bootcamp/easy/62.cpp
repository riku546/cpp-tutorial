#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> C(H, vector<char>(W));
  rep(i, 0, H) rep(j, 0, W) cin >> C[i][j];

  rep(i, 0, H)
  {
    rep(j, 0, W) cout << C[i][j];
    cout << endl;
    rep(j, 0, W) cout << C[i][j];
    cout << endl;
  }
}