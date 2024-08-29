#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> result;
  vector<int> a = {1, 2, 3};
  for (size_t i = 0; i < 1 << a.size(); i++)
  {
    vector<int> temp = {};
    for (size_t j = 0; j < a.size(); j++)
    {
      if (i & (1 << j))
      {
        temp.push_back(a[j]);
      }
    }
    result.push_back(temp);
  }

  for (size_t i = 0; i < result.size(); i++)
  {
    for (size_t j = 0; j < result[i].size(); j++)
    {

      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}