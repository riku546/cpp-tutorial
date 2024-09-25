#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> a(M);
  int ans = 0;
  rep(i, 0, M)
  {
    int c;
    cin >> c;
    
    rep(j, 0, c)
    {
      int temp;
      cin >> temp;
      a[i].push_back(temp);
    };
  }

  rep(i, 0, 1 << M)
  {
    vector<int> temp = {};
    vector<int> memory(N);
    rep(j, 0, M)
    {
      if (i & (1 << j))
        temp.push_back(j);
    }

    rep(k, 0, temp.size())
    {
      rep(x, 0, a[temp[k]].size()) memory[a[temp[k]][x] - 1] = 1;
    }
    if (!count(memory.begin(), memory.end(), 0))
      ans++;
  }

  cout << ans << endl;
}