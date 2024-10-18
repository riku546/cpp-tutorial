// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int kuku(int n)
// {
//   if (n == 0)
//     return 0;

//   kuku(n - 1);

//   rep(i, 1, 10) cout << i * n << ' ';
//   cout << endl;

//   return 0;
// }

// int main()
// {
//   kuku(9);
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int fib(int n)
// {
//   if (n == 0)
//     return 0;
//   else if (n == 1)
//     return 1;

//   return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//   cout << fib(9) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// bool func(int i, int x, const vector<int> &a) {
//     // ベースケース
//     if (i == 0) {
//         if (x == 0) return true;
//         else return false;
//     }

//     // a[i-1] を選ばない場合 (func(i-1, x, a) が OK なら OK)
//     if (func(i-1, x, a)) return true;

//     // a[i-1] を選ぶ場合 (func(i-1, x-a[i-1], a) が OK なら OK)
//     if (func(i-1, x-a[i-1], a)) return true;

//     // どっちもダメだったらダメ
//     return false;
// }

// int main() {
//     // 入力
//     int n; cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) cin >> a[i];
//     int X; cin >> X;

//     // 再帰的に解く
//     if (func(n, X, a)) cout << "Yes" << endl;
//     else cout << "No" << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int n, k;

// void recursion(vector<int> a, vector<int> r)
// {

//   if (a.size() == n)
//   {
//     int total = reduce(a.begin(), a.end());
//     if (total % k != 0)
//       return;
//     rep(i, 0, n) cout << a[i] << ' ';
//     cout << endl;
//     return;
//   }

//   rep(i, 1, r[a.size()] + 1)
//   {
//     a.push_back(i);
//     recursion(a, r);
//     a.pop_back();
//   }
// }

// int main()
// {
//   cin >> n >> k;
//   vector<int> r(n);
//   rep(i, 0, n) cin >> r[i];
//   vector<int> a;
//   recursion(a, r);
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int n, k;
vector<int> r;

void recursion(vector<int> lst)
{
  if (lst.size() == n)
  {
    
    int sum = reduce(lst.begin(), lst.end());
    if (sum % k == 0)
    {
      rep(i, 0, lst.size()) cout << lst[i] << ' ';
      cout << endl;
      return;
    }
  }

  rep(i, 1, r[lst.size()] + 1)
  {
    lst.push_back(i);
    recursion(lst);
    lst.pop_back();
  }
}

int main()
{
  cin >> n >> k;
  rep(i, 0, n)
  {
    int temp;
    cin >> temp;
    r.push_back(temp);
  }
  vector<int> lst;
  recursion(lst);
}