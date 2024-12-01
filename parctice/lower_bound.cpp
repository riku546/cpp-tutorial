// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   vector<int> temp = {2, 3, 4, 5, 6, 7};
//   int search_value = 2;
//   auto result = lower_bound(temp.begin(), temp.end(), search_value);

//   // 検索した値以上のものが配列に存在しない場合は、配列のend()イテレータが返される
//   if (result == temp.end())
//     cout << -1 << endl;

//   // 検索した値が以上のものが存在する場合
//   else
//     cout << result - temp.begin() << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  vector<int> numLst = {1, 3, 5, 8, 10, 11, 29};
  int purposeValue ;
  cin >> purposeValue;
  auto result = lower_bound(numLst.begin(), numLst.end(), purposeValue);
  bool isNotExit = result == numLst.end() || numLst[result - numLst.begin()] != purposeValue;
  if (isNotExit)
    cout << -1 << endl;
  else
    cout << result - numLst.begin() << endl;
}