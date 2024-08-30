#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, 0, N) cin >> d[i];
  int ans = 0;
  rep(i, 0, N) rep(j, i + 1, N) ans += d[i] * d[j];
  cout << ans << endl;
}