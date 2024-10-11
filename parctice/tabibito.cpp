#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> k(n);

  rep(i, 1, n)
  {
    int temp;
    cin >> temp;
    k[i] = temp + k[i - 1];
  }

  ll ans = 0;
  int right = 0, left = 0;
  rep(i, 0, m)
  {
    int a;

    cin >> a;
    left += a;

    ans += (ll)k[max(right, left)] - k[min(right, left)];
    right = left;
  }
  ans %= 100000;
  cout << ans << endl;
}