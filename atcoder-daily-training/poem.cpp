#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<string, bool> temp;
  vector<pair<int, int>> ans;
  rep(i, 0, n)
  {
    string s;
    int t;
    cin >> s >> t;
    if (!temp[s])
    {
      ans.push_back(make_pair(t, i + 1));
      temp[s] = true;
    }
  }

  sort(ans.begin(), ans.end());
  int best_value = ans.back().first;
  if (best_value == ans[ans.size() - 2].first)
  {
    for (int i = -3; i < 0; i--)
    {
      if (best_value != ans[ans.size() + i].first)
      {
        cout << ans[ans.size() + i + 1 ].second << endl;
        return 0;
      }
    }
  }
  else
  {

    cout << ans.back().second << endl;
  }
}