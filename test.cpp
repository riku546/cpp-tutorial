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

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   vector<ll> a(n);
//   rep(i, 0, n) cin >> a[i];

//   ll ans = 0;
//   ll d;
//   int right = 1;

//   rep(left, 0, n)
//   {
//     while (right < n - 1 && a[right + 1] - a[right] == a[right] - a[right - 1])
//     {
//       right++;
//     }

//     ans += right - left;

//     if (right < n - 1 && right - 1 == left)
//     {
//       right++;
//     }
//   }

//   cout << ans + n << endl;
// }