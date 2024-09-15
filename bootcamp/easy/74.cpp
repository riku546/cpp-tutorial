#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  ll ans = 1e15;
  for (int i = 0; i <= max(X, Y) * 2; i++)
  {
    ll cost_a = 0, cost_b = 0;
    if (X - i / 2 > 0)
    {

      cost_a = A * (X - i / 2);
    }
    if (Y - i / 2 > 0)
    {

      cost_b = B * (Y - i / 2);
    }
    ll cost_ab = C * i;

    ans = min(ans, cost_a + cost_b + cost_ab);
    cout << ans << endl;
  }

  cout << ans << endl;
}