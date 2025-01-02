#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

vector<vector<int>> seen(50, vector<int>(50));

void dfs(vector<vector<int>> g, int node, int j)
{
  seen[j][node] = 1;

  for (auto var : g[node])
  {
    if (seen[j][var])
      continue;
    dfs(g, var, j);
  }
};

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
  }

  vector<int> ans = {};

  rep(j, 0, n)
  {
    dfs(g, j, j);

    
    if (reduce(seen[j].begin(), seen[j].end()) == n)
    {
      
      ans.push_back(j);
      
    }
  }

  if (ans.size() == 1)
  {
    cout << ans.front() + 1 << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}