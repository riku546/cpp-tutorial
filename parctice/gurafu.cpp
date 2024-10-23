// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;
// using Graph = vector<vector<int>>;

// int n, m;
// vector<int> seen(5);
// vector<int> todo;

// void dfs(Graph G, int node)
// {
//   seen[node] = 1;
//   cout << node << endl;
//   for (auto var : G[node])
//   {
//     if (seen[var] == 1)
//       continue;
//     dfs(G, var);
//   }
// }

// int main()
// {
//   cin >> n >> m;
//   Graph G(n);

//   rep(i, 0, m)
//   {
//     int a, b;
//     cin >> a >> b;
//     G[a - 1].push_back(b - 1);
//   }
//   dfs(G, 0);
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// vector<int> seen(100);

// void recursion(vector<vector<int>> gurafu, int node)
// {
//   seen[node] = 1;
//   for (auto var : gurafu[node])
//   {

//     if (seen[var] == 1)
//       continue;
//     recursion(gurafu, var);
//   }
// }

// int main()
// {
//   int n, m, s, t;
//   cin >> n >> m >> s >> t;
//   vector<vector<int>> gurafu(m);

//   rep(i, 0, n)
//   {
//     int node1, node2;
//     cin >> node1 >> node2;
//     node1--;
//     node2--;

//     gurafu[node1].push_back(node2);
//   }

//   recursion(gurafu, s - 1);
//   cout << seen[t - 1] << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;

vector<int> seen(100);

void dfs(Graph g, int node)
{
  seen[node] = 1;
  for (auto var : g[node])
  {
    if (seen[var])
      continue;
    dfs(g, var);
  }
}

int main()
{
  int n, m, cnt = 0;
  cin >> n >> m;
  Graph g(n);
  rep(i, 0, m)
  {
    int node1, node2;
    cin >> node1 >> node2;
    g[node1 - 1].push_back(node2 - 1);
    g[node2 - 1].push_back(node1 - 1);
  }

  rep(i, 0, n)
  {
    if(seen[i])continue;
    dfs(g, i);
    cnt++;
  }

  cout << cnt << endl;
}