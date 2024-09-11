#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];

  ll ans = 2 * N - 1;

  rep(i, 0, N - 2)
  {
    int temp1 = (A[i + 1]) - A[i];
    int temp2 = (A[i + 2]) - (A[i + 1]);
    if (temp1 != temp2)
      continue;
    ans++;
    rep(j, i + 2, N - 1)
    {
      if (temp1 == A[j + 1] - A[j])
        ans++;
      else
        break;
    }
  }

  cout << ans << endl;
}