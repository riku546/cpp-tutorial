#include <bits/stdc++.h>
using namespace std;

int main()
{
  // string s = "hello";
  // vector<int>num ={1 , 2, 3};
  // int a = min(10, 2);
  // int b = max(19 , 10);
  // swap(a,b);

  // // cout << a << endl;
  // // cout << b << endl;

  // sort(num.begin()  , num.end());
  // reverse(num.begin(), num.end());
  // for (int i = 0; i < num.size(); i++)
  // {
  //   cout << num[i];
  // }

  int A, B, C;
  int min_num, max_num;
  vector<int> nums(3, 0);

  for (int i = 0; i < 3; i++)
    cin >> nums[i];

  sort(nums.begin(), nums.end());
  min_num = nums[0];
  reverse(nums.begin(), nums.end());
  max_num = nums[0];

  cout << max_num - min_num <<endl;
}
