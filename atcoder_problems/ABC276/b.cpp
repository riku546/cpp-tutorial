#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, 0, m)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  rep(i, 0, n)
  {
    if (g[i].size() == 0)
    {
      cout << 0 << endl;
      continue;
    };
    sort(g[i].begin(), g[i].end());
    cout << g[i].size() << ' ';
    rep(j, 0, g[i].size()) cout << g[i][j] + 1 << ' ';
    cout << endl;
  }
}