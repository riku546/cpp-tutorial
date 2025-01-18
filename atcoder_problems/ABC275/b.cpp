#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ull a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  cout << (((a * b * c) - (d * e * f) )% 998244353) << endl;
}

