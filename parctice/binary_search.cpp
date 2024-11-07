#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int binary_search(vector<int> arr, int value)
{
  int right = arr.size() - 1, left = 0;
  while (right - left > 1)
  {
    ll mid = (right + left) / 2;
    if (arr[mid] == value)
    {
      return mid;
    }
    else if (arr[mid] < value)
      left = mid;
    else
      right = mid;
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << binary_search(arr, 3) << endl;
}
