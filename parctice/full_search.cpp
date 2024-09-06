#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  ll ans = 50000000000;
  rep(i, 0, 201010)
  {
    ll price = C * i;
    if (X - (i / 2) > 0)
      price += A * (X - (i / 2));
    if (Y - (i / 2) > 0)
      price += B * (Y - (i / 2));

    ans = min(ans, price);
  }

  cout << ans << endl;
}
