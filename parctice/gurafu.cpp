#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;

int n, m;
vector<int> seen(5);
vector<int> todo;

void dfs(Graph G, int node)
{
  seen[node] = 1;
  cout << node << endl;
  for (auto var : G[node])
  {
    if (seen[var] == 1)
      continue;
    dfs(G, var);
  }
}

int main()
{
  cin >> n >> m;
  Graph G(n);

  rep(i, 0, m)
  {
    int a, b;
    cin >> a >> b;
    G[a - 1].push_back(b - 1);
  }
  dfs(G, 0);
}