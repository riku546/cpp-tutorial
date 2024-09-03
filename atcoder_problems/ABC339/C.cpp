#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int binary_search(vector<int> nums, int value)
{
  int left = 0;
  int right = nums.size() - 1;

  while (left <= right)
  {
    int center = (left + right) / 2;
    if (nums[center] == value)
    {
      cout << center;
      return 0;
    }
    else if (nums[center] > value)
      right = center - 1;
    else if (nums[center] < value)
      left = center + 1;
  }

  cout << -1;
  return 0;
}

int main()
{
  vector<int> nums = {1, 2, 4, 6, 7, 10};
  int purpose_value;
  cin >> purpose_value;
  binary_search(nums, purpose_value);
}