#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  int n, m;
  cin >> n >> m;
  Graph G(n);

  rep(i, 0, m)
  {
    int a, b;
    cin >> a >> b;
    G[a - 1].push_back(b);
  }

  rep(i, 0, n)
  {
    cout << i + 1 << ": ";
    for (auto var : G[i])
    {
      cout << var << ' ';
    }
    cout << endl;
  }
}