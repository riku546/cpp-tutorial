#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  int ans = A[N - 1] - A[0];
  rep(i, 1, N)
  {
    int temp1 = K - A[i];
    int temp2 = A[i - 1];
    ans = min(ans, temp1 + temp2);
  }

  cout << ans << endl;
}