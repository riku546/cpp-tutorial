#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  int right = 0;
  ll ans = 0;

  rep(left, 0, n)
  {
    while (right < n && a[right] < a[left] * 2)
    {
      right++;
    }

    ans += n - right;

    // whileでrightがインクリメントされなかったとき
    if (left == right)
      right++;
  }

  cout << ans << endl;
}