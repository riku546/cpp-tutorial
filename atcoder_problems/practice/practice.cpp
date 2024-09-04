#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

bool isValid(int mid, int purpose)
{
  if (nums[mid] >= purpose)
    return true;
  else
    return false;
}

int binary_search(int key)
{
  int left = -1;
  int right = nums.size();

  while (right - left > 1)
  {
    int mid = left + (right - left) / 2;

    if (isValid(mid, key))
      right = mid;
    else
      left = mid;
  }

  return right;
}

int main()
{

  cout << binary_search(1) << endl;
  cout << binary_search(5) << endl;
  cout << binary_search(11) << endl;
  cout << binary_search(1000) << endl;

}