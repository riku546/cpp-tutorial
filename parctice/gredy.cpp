#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  int ans = 1;
  rep(i, 0, N) ans = min(ans * 2, ans + K);
  cout << ans << endl;
}
