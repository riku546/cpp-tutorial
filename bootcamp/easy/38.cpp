#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C, D, E;
  vector<pair<int, int>> memory(5);
  int temp = 0;
  int index;
  rep(i, 0, memory.size()) cin >> memory[i].first;

  rep(i, 0, memory.size())
  {
    int t = 10 - (memory[i].first % 10);
    if (t == 10)
    {
      memory[i].second = 0;
    }
    else
    {
      memory[i].second = t;
      if (temp <= t)
      {
        temp = t;
        index = i;
      }
    }
  }
  int ans = memory[index].first;

  rep(i, 0, memory.size())
  {
    if (index == i)
      continue;
    ans += memory[i].first;
    ans += memory[i].second;
  }

  cout << ans << endl;
}