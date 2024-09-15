#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int X;
  cin >> X;
  int ans = 0;
  rep(i, 1, 100)
  {
    rep(j, 2, 11)
    {
      if (pow(i, j) <= X)
        ans = max(ans, (int)pow(i, j));
    }
  }

  cout << ans << endl;
}