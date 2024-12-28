#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<ll> nums(n);
  rep(i, 0, n) cin >> nums[i];
  ll temp = nums.front();
  cout << temp << ' ';
  rep(i, 1, n)
  {
    ll temp1 = nums[i] - temp;
    cout << temp1 << ' ';
    temp += temp1;
  }
  cout << endl;
}