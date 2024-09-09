#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, D, x;
  cin >> N;
  cin >> D >> x;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];

  int ans = x;
  rep(i, 0, N)
  {
    int j = 1;
    int cnt = 1;

    while (j * A[i] + 1 <= D)
    {
      cnt++;
      j++;
    }

    ans += cnt;
  }

  cout << ans << endl;
}