#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> lr(M);
  rep(i, 0, M) cin >> lr[i].first >> lr[i].second;

  if (M == 1)
  {
    cout << lr[0].second - lr[0].first + 1 << endl;
    return 0;
  }

  int left = max(lr[0].first, lr[1].first);
  int right = min(lr[0].second, lr[1].second);

  rep(i, 2, M)
  {
    left = max(lr[i].first, left);
    right = min(lr[i].second, right);
  }
  int ans = right - left + 1;
  if (ans <= 0)
  {
    cout << 0 << endl;
    return 0;
  }

  cout << ans << endl;
}