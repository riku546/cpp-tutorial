#include <bits/stdc++.h>
using namespace std;

// int sum(int n){
//   if(n==0){
//     return n;
//   }

//   int s = sum(n - 1);
//   return s + n;
// }

int array_sum(int i)
{
  vector<int> nums = {1, 2, 3, 5};
  if (i < 0)
  {
    return 0;
  }

  int sum = array_sum(i - 1);
  return sum + nums[i];
}

int main()
{
  int sum = array_sum(3);
  cout << sum;
}