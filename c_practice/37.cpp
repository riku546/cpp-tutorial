#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> sum(N + 1);
  rep(i, 0, N)
  {
    int a;
    cin >> a;
    sum[i + 1] = sum[i] + a;
  }

  ll ans = 0;
  rep(i, 0, N - K + 1)
  {
    ans += sum[i + K ] - sum[i];
    
  }
  cout << ans << endl;
}