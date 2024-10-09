#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, M) cin >> B[i];

  int ans = 0;
  rep(i, 0, N) rep(j, 0, M)
  {
    ans += (A[i] + B[j]) * max(A[i], B[j]);
  }
  cout << ans << endl;
}