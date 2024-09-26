#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int dango(string S, int N)
{
  int ans = 0;
  rep(n, 0, N - 1)
  {
    if (S[n] == '-')
    {
      int temp = 0;
      rep(j, n + 1, N)
      {
        if (S[j] == 'o')
          temp++;
        else
        {
          ans = max(ans, temp);
          n += j;
          break;
        };
      }
    }
  }
  return ans;
}

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  int re1, re2;

  re1 = dango(S, N);
  ans = max(ans, re1);
  reverse(S.begin(), S.end());
  re2 = dango(S, N);
  ans = max(ans, re2);

  if (ans == 0)
    cout << -1 << endl;
  else
    cout << ans << endl;
}