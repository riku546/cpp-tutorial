#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  int ans = 0;
  int rest = x;
  sort(a.begin(), a.end());
  rep(i, 0, N - 1)
  {
    if (rest - a[i] >= 0)
    {
      ans++;
      rest -= a[i];
    }
  }
  if (rest == a[N - 1])
    ans++;
  cout << ans << endl;
}