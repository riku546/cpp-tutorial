#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  sort(A.begin(), A.end());

  int ans = 1e9;
  rep(i, 0, K + 1)
  {

    ans = min(ans, A[i + N - K - 1] - A[i]);
  }

  cout << ans << endl;
}