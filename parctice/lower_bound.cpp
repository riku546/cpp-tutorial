#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  vector<int> temp = {2, 3, 4, 5, 6, 7};
  int search_value = 2;
  auto result = lower_bound(temp.begin(), temp.end(), search_value);

  // 検索した値以上のものが配列に存在しない場合は、配列のend()イテレータが返される
  if (result == temp.end())
    cout << -1 << endl;

  // 検索した値が以上のものが存在する場合
  else
    cout << result - temp.begin() << endl;
}