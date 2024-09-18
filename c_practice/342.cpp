#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll N;
  cin >> N;
  ll ans = 1;
  rep(i, 1, 1e6)
  {
    ll num = pow(i, 3);
    if (num <= N)
    {
      string sn = to_string(num);
      reverse(sn.begin(), sn.end());
      if (sn == to_string(num))
      {
        ans = num;
      }
    }
  }

  cout << ans << endl;
}