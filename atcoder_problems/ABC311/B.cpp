#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;
  vector<vector<char>> S(D, vector<char>(N));
  rep(i, 0, N) rep(j, 0, D) cin >> S[j][i];

  int ans = 0;
  rep(i, 0, D)
  {
    int temp = 0;
    if (count(S[i].begin(), S[i].end(), 'x'))
    {

      continue;
    }

    temp++;

    rep(j, i + 1, D)
    {
      if (count(S[j].begin(), S[j].end(), 'x'))
        break;
      temp++;
    }
    ans = max(ans, temp);
  }

  cout << ans << endl;
}