// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   ull n, k;
//   cin >> n >> k;
//   ull sum = k * (k + 1) / 2;
//   map<int, bool> temp;

//   rep(i, 0, n)
//   {
//     ull a;
//     cin >> a;
//     if (a > k)
//       continue;

//     if (temp[a])
//       continue;

//     sum -= a;
//     temp[a] = true;
//   }

//   cout << sum << endl;
// }

