#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;

  vector<int> b(N + 1);
  vector<int> w(N + 1);

  rep(i, 0, N)
  {
    if (S[i] == '#')
      b[i + 1] = b[i] + 1;
    else
      b[i + 1] = b[i];
  }

  rep(i, 0, N)
  {
    if (S[i] == '.')
      w[i + 1] = w[i] + 1;
    else
      w[i + 1] = w[i];
  }

  int t = 0;
  rep(i, 0, N)
  {
    if (b[i + 1] == b[i] && i + 1 < N + 1)
    {
      int r = i;

      while (b[r + 1] == b[r] && r + 1 < N + 1)
        r++;

      ans += min(b[r] - b[t], w[r] - w[i]);
      t = b[r - 1];
      i = r - 1;
    }
  }

  cout << ans << endl;
}