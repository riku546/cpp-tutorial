#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C, X;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> X;
  int ans = 0;

  rep(a, 0, A + 1)
  {
    rep(b, 0, B + 1)
    {
      rep(c, 0, C + 1)
      {
        if (500 * a + 100 * b + 50 * c == X)
          ans++;
      }
    }
  }
  cout << ans << endl;
}