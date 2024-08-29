#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  vector<vector<int>> result;
  vector<int> a = {1, 2, 3};
  rep(i, 1 << a.size())
  {
    vector<int> temp = {};
    rep(j, a.size())
    {
      if (i & (1 << j))
      {
        temp.push_back(a[j]);
      }
    }
    result.push_back(temp);
  }

  rep(i, result.size())
  {
    rep(j, result[i].size()) cout << result[i][j] << " ";
    cout << endl;
  }
}