#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];
  vector<ll> temp(n + 1);
  rep(i, 0, n) temp[i + 1] =(ll) a[i] + temp[i];
  rep(i, 0, q)
  {
    int l, r;
    cin >> l >> r;
    l--;

    cout << temp[r] - temp[l] << endl;
  }
}