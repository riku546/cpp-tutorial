#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  vector<int> nums = {1, 2, 3};
  for (auto num : nums)
    cout << num << ' ';
  cout << endl;
  while (next_permutation(nums.begin(), nums.end()))
  {
    for (int num : nums)
    {
      cout << num << ' ';
    }
    cout << endl;
  }
}