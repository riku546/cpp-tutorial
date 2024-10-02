// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int N, M;
//   cin >> N >> M;
//   vector<int> a(N);
//   rep(i, 0, N) cin >> a[i];
//   sort(a.begin(), a.end());

//   int ans = 0;
//   int r = 0;
//   rep(l, 0, N)
//   {
//     while (r < N && a[r] < a[l] + M)
//       r++;
//     ans = max(ans, r - l);
//   }
//   cout << ans << endl;
// }

