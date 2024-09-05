#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

// vector<int> a = {1, 2, 3, 4, 5, 6};

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

// // index が条件を満たすかどうか
// bool isOK(int index, int key)
// {
//   if (a[index] >= key)
//     return true;
//   else
//     return false;
// }

// // 汎用的な二分探索のテンプレ
// int binary_search(int key)
// {
//   int left = -1;             // 「index = 0」が条件を満たすこともあるので、初期値は -1
//   int right = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

//   /* どんな二分探索でもここの書き方を変えずにできる！ */
//   while (right - left > 1)
//   {
//     int mid = left + (right - left) / 2;

//     if (isOK(mid, key))
//       right = mid;
//     else
//       left = mid;
//   }

//   /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
//   return right;
// }

bool isOK(vector<int> S, int mid, int value)
{
  if (S[mid] >= value)
    return true;
  else
    return false;
}

int binary_search(vector<int> S, int value)
{
  int left = -1;
  int right = S.size();

  while (right - left > 1)
  {

    int mid = left + (right - left) / 2;
    if (isOK(S, mid, value))
      right = mid;
    else
      left = mid;
  }

  return right;
}

int main()
{
  int n, q;
  cin >> n;
  vector<int> s(n);
  rep(i, 0, n) cin >> s[i];
  cin >> q;
  vector<int> t(q);
  for (int j = 0; j < q; j++)
    cin >> t[j];

  int ans = 0;

  rep(i, 0, q)
  {
    int q_index = binary_search(s, t[i]);
    if (q_index < n)
    {
      ans++;

    }
  }

  cout << ans << endl;
}
