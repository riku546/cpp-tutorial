#include <bits/stdc++.h>
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];

  int cnt = 0;
  if (N % 2 == 0)
  {
    rep(i, 0, N) if (A[i] % 2 == 0) cnt++;
    if (cnt % 2 == 0)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  else if (N % 2 != 0)
  {
    rep(i, 0, N) if (A[i] % 2 == 0) cnt++;
    if (cnt % 2 != 0)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}