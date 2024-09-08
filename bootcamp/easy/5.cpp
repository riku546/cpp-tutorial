#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M, C;
  cin >> N >> M >> C;
  vector<vector<int>> A(N, vector<int>(M));
  vector<int> B(M);
  rep(i, 0, M) cin >> B[i];
  rep(i, 0, N) rep(j, 0, M) cin >> A[i][j];
  int ans = 0;
  rep(i, 0, N)
  {
    int sum = 0;
    rep(j, 0, M) sum += A[i][j] * B[j];
    if (sum + C > 0)
      ans++;
  }

  cout << ans << endl;
}