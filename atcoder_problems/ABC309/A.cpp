#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  
  rep(i, 0, nums.size()) rep(j, 0, nums.size())
  {
    if (A == nums[i][j])
    {
      j++;
      if (j < nums.size() && nums[i][j] == B)
      {
        cout << "Yes" << endl;

        return 0;
      }
    }
  }
  cout << "No" << endl;
}