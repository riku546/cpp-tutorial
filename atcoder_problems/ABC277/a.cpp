#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> p(n);
  rep(i, 0, n) cin >> p[i];
  rep(i, 0, n)
  {
    if (p[i] == x)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
}