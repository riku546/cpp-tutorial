#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  ll ans = 0;

  rep(i, 0, n)
  {
    auto temp = lower_bound(a.begin(), a.end(), a[i] * 2);
    ans += n - (temp - a.begin());
  }

  cout << ans << endl;
}