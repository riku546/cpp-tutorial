#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N, vector<int>(M));
  rep(i, 0, N) rep(j, 0, M) cin >> A[i][j];
  long long ans = 0;
  rep(i, 0, M)
  {
    rep(j, i + 1, M)
    {
      long long temp = 0;
      rep(k, 0, N)
      {
        temp += max(A[k][i], A[k][j]);
      }
      ans = max(ans, temp);
    }
  }

  cout << ans << endl;
}