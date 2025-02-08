// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   rep(i, 0, n) cin >> a[i];

//   ll ans = 0;

//   rep(i, 0, n)
//   {
//     auto temp = lower_bound(a.begin(), a.end(), a[i] * 2);
//     ans += n - (temp - a.begin());
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
//   int ans = 0;

//   rep(i, 1, n + 1)
//   {
//     if (i % 2 == 0)
//       continue;

//     set<int> temp;
//     rep(j, 1, sqrt(n) + 1)
//     {
//       if (i % j == 0)
//       {
//         temp.insert(j);
//         temp.insert(i / j);
//       }
//     }
//     if (temp.size() == 8)
//       ans++;
//   }

//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// bool check(vector<int> &arr, vector<int> &pq)
// {
//   rep(i, 0, arr.size()) if (arr[i] != pq[i]) return false;

//   return true;
// }

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> p(n);
//   vector<int> q(n);
//   rep(i, 0, n) cin >> p[i];
//   rep(i, 0, n) cin >> q[i];
//   int a, b;
//   vector<int> arr = {};
//   rep(i, 1, n + 1) arr.push_back(i);
//   int cnt = 1;
//   if (check(arr, p))
//     a = cnt;
//   if (check(arr, q))
//     b = cnt;

//   do
//   {
//     cnt++;

//     if (check(arr, p))
//     {

//       a = cnt;
//     }
//     if (check(arr, q))
//     {
//       b = cnt;
//     }

//   } while (next_permutation(arr.begin(), arr.end()));

//   cout << abs(a - b) << endl;
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
//   vector<ll> k(n);
//   rep(i, 0, n) cin >> k[i];
//   ll ans = 1e10;
//   rep(i, 0, 1 << n)
//   {
//     ll a = 0, b = 0;
//     rep(j , 0 , n){
//       if(i & (1 << j)) a += k[j];
//       else b+=k[j];
//     }
//     ans = min(ans , (max(a , b)));
//   }
//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// vector<bool> seen(100);

// void dfs(vector<vector<int>> grid, int node)
// {
//   seen[node] = true;

//   for (auto var : grid[node])
//   {
//     if (seen[var])
//       continue;
//     dfs(grid, var);
//   }
// }

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   vector<vector<int>> grid(n);
//   rep(i, 0, m)
//   {
//     int n1, n2;
//     cin >> n1 >> n2;
//     n1--;
//     n2--;
//     grid[n1].push_back(n2);
//     grid[n2].push_back(n1);
//   }

//   int ans = 0;
//   rep(i, 0, n)
//   {
//     if (seen[i])
//       continue;
//     dfs(grid, i);
//     ans++;
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
//   int n, k;
//   cin >> n >> k;
//   string s;
//   cin >> s;

//   vector<pair<char , int>>rle;
//   rep(i , 0 , n){
//     if(rle.size() && rle.back().first == s[i]) rle.back().second++;
//     else rle.push_back(make_pair(s[i] , 1));
//   }

//   int one_cnt = 0;
//   rep(i , 0 , rle.size()){
//     if(rle[i].first == '1') one_cnt++;
//     if(one_cnt == k) {
//       swap(rle[i - 1] , rle[i]);
//     }
//   }

//   rep(i , 0 , rle.size()){
//     rep(j , 0 , rle[i].second){
//       cout << rle[i].first ;
//     }
//   }
//   cout << endl;
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
//   vector<int> a(n);
//   rep(i, 0, n) cin >> a[i];

//   vector<ll>ea(n+1);
//   rep(i , 0 , n) ea[i + 1] = ea[i] + a[i];

  
//   rep(k , 1, n + 1) {
//     ll ans = 0;
//     rep(j , 0 , n - k + 1) ans = max(ans , (ll)ea[j + k] - ea[j]);
//     cout << ans << endl;
//   }
  
// }
