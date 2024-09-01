#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> wx(N, vector<int>(2));
  rep(i, N) cin >> wx[i][0] >> wx[i][1];
  vector<int> ans = {};

  rep(i, 24)
  {
    int temp = 0;
    rep(j, N)
    {
      int time = wx[j][1] + i;
      if (time >= 24)
        time %= 24;
      if (time >= 9 && time <= 18)
        temp += wx[j][0];
    }
    ans.push_back(temp);
  }

  sort(ans.begin(), ans.end());
  reverse(ans.begin(), ans.end());
  cout << ans[0] << endl;
}