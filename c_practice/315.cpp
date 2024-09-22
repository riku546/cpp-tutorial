#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, vector<int>> memory;
  ll ans = 0;
  rep(i, 0, N)
  {
    int f, s;
    cin >> f >> s;
    memory[f].push_back(s);
  }

  for (auto& vec : memory)
  {
    if (vec.second.size() == 1)
      continue;
    sort(vec.second.begin(), vec.second.end());
    int size = vec.second.size();
    ans = max(ans, (ll)vec.second[size - 1] + vec.second[size - 2] / 2);
  }

  int top = 0;
  int second = 0;

  for (pair<int, vector<int>> vec : memory)
  {
    if (vec.second.back() > top)
    {
      second = top;
      top = vec.second.back();
    }
    else if (vec.second.back() > second)
    {
      second = vec.second.back();
    }
  }
  ans = max(ans, (ll)top + second);
  cout << ans << endl;
}