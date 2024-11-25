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
  int ans = 2e9;

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


  if (S == string(N , '.') || S == string(N , '#'))
  {
    cout << 0 << endl;
    return 0;
  }

  rep(i, 1, N + 1) ans = min(ans, (b[i - 1] - b[0]) + (w[N] - w[i - 1]));

  cout << ans << endl;
}