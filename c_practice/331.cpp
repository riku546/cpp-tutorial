#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  vector<vector<int>> is(1000005);
  rep(i, 0, N) is[a[i]].push_back(i);

  vector<ll> ans(N);
  ll now = 0;
  for (int x = 1000005 - 1; x >= 1; x--)
  {
    for (auto var : is[x])
    {
      ans[var] = now;
    }
    now += (ll)x * is[x].size();
  }
  rep(i, 0, N) cout << ans[i] << ' ';
  cout << endl;
}