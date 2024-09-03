#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  rep(i, 0, N) cin >> D[i];
  int ans = P;
  rep(i, 0, N)
  {
    ans = min(ans, Q + D[i]);
  }
  cout << ans << endl;
}