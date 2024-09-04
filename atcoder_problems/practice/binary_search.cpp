#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

vector<int> a = {1, 2, 3, 4, 5, 6};

// bool checkValid(int index, int key)
// {
//   if (a[index] >= key)
//     return true;
//   else
//     return false;
// }

// int binary_search(int key)
// {
//   int left = -1;
//   int right = a.size();

//   while (right - left > 1)
//   {
//     cout << "aa";
//     int mid = left + (right + left) / 2;
//     if (checkValid(mid, key))
//       right = mid;
//     else
//       left = mid;
//   }

//   return right;
// }

// index が条件を満たすかどうか
bool isOK(int index, int key)
{
  if (a[index] >= key)
    return true;
  else
    return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key)
{
  int left = -1;             // 「index = 0」が条件を満たすこともあるので、初期値は -1
  int right = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

  /* どんな二分探索でもここの書き方を変えずにできる！ */
  while (right - left > 1)
  {
    int mid = left + (right - left) / 2;

    if (isOK(mid, key))
      right = mid;
    else
      left = mid;
  }

  /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
  return right;
}

int main()
{
  cout << binary_search(1) << endl;
  cout << binary_search(3) << endl;
  cout << binary_search(10) << endl;
  cout << binary_search(300) << endl;
}



