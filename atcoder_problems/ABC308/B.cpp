#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> C(N);
  vector<string> D(M);
  vector<int> P(M + 1);

  rep(i, 0, N) cin >> C[i];
  rep(i, 0, M) cin >> D[i];
  rep(i, 0, M + 1) cin >> P[i];

  int ans = 0;
  rep(i, 0, N)
  {
    int temp = 0;
    rep(j, 0, M)
    {
      if (C[i] == D[j])
      {
        temp = P[j + 1];
        break;
      }
    }
      if (temp <= 0)
        ans += P[0];
      else
        ans += temp;

      
  }
    cout << ans << endl;
}