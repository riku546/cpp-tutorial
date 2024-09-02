#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> fs(N, vector<int>(2));
  rep(i, 0, N) cin >> fs[i][0] >> fs[i][1];

  int ans = 0;
  rep(i, 0, N) rep(j, i + 1, N)
  {
    if (fs[i][0] != fs[j][0])
    {
      ans = max(ans, fs[i][1] + fs[j][1]);
    }
    else if (fs[i][0] == fs[j][0])
    {
      int t = min(fs[i][1], fs[j][1]);
      int s = max(fs[i][1], fs[j][1]);
      ans = max(ans, s + (t / 2));
    }
  }

  cout << ans << endl;
}