#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> temp(h);
  rep(i, 0, h) cin >> temp[i];
  int ans = 0;
  rep(i, 0, h) rep(j, 0, w) if (temp[i][j] == '#') ans++;
  cout << ans << endl;
}