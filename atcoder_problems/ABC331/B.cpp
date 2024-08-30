#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  int ans = 0;
  rep(i, 20) rep(j, 20) rep(k, 20)
  {
    if ((6 * i) + (8 * j) + (12 * k) >= N)
    {
      if (ans == 0)
        ans = (i * S) + (j * M) + (k * L);
      ans = min(ans, (i * S) + (j * M) + (k * L));
    }
  }

  cout << ans << endl;
}