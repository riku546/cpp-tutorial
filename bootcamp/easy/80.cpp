#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll N;
  cin >> N;
  ll ans = 1e12;
  rep(i, 1, pow(N, 0.5) + 1)
  {
    if (N % i == 0)
    {
      ans = min(ans, N / i + i - 2);
    }
  }

  cout << ans << endl;
}