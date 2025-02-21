// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int sum = 0;
//   rep(i, 0, n - 1)
//   {
//     int temp;
//     cin >> temp;
//     sum += temp;
//   }

//   cout << -1 * sum << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   string s;
//   cin >> s;

//   vector<int> ans(100);
//   map<char, int> temp;

//   rep(i, 0, s.size()) temp[s[i]]++;

//   for (auto var : temp)
//   {
//     ans[var.second - 1]++;
//   }

//   rep(i, 0, ans.size())
//   {
//     if (ans[i] != 0 && ans[i] != 2)
//     {
//       cout << "No" << endl;
//       return 0;
//     }
//   }

//   cout << "Yes" << endl;
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
//   string ans = "";

//   rep(i, 1, n + 1)
//   {
//     if (i % 3 == 0)
//       ans.push_back('x');
//     else
//       ans.push_back('o');
//   }

//   cout << ans << endl;
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
//   vector<pair<int, int>> grid(n);
//   rep(i, 0, n)
//   {
//     int x, y;
//     cin >> x >> y;
//     grid[i].first = x;
//     grid[i].second = y;
//   }

//   rep(i, 0, n)
//   {
//     pair<int, int> ans = make_pair(0, 0);
//     for (int j = n - 1; j > -1; j--)
//     {
//       if (i == j)
//         continue;

//       int distance = pow(grid[i].first - grid[j].first, 2) + pow(grid[i].second - grid[j].second, 2);
//       if (distance >= ans.first)
//         ans = make_pair(distance, j);
//     }

//     cout << ans.second + 1 << endl;
//   }
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
//   map<int, int> temp;
//   rep(i, 0, n)
//   {
//     int a, c;
//     cin >> a >> c;

//     if (temp[c] == 0)
//       temp[c] = a;
//     else
//       temp[c] = min(temp[c], a);
//   }
//   int ans = 0;
//   for (auto var : temp)
//   {
//     ans = max(ans, var.second);
//   }

//   cout << ans << endl;
// }
