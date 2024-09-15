#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> H(N);
  rep(i, 0, N) cin >> H[i];

  sort(H.begin(), H.end());

  ll ans = 2e9;
  rep(i, 0, N - K + 1)
  {
    ans = min(ans, H[K + i - 1] - H[i]);
  }

  cout << ans << endl;
}