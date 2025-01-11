// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   vector<vector<int>> a(n, vector<int>(m));
//   rep(i, 0, n) rep(j, 0, m) cin >> a[i][j];
//   ll ans = 0;

//   rep(i, 0, m)
//   {
//     rep(j, i + 1, m)
//     {
//       ll temp = 0;
//       rep(k, 0, n)
//       {
//         temp += (ll)max(a[k][i], a[k][j]);
//       }
//       ans = max(ans, temp);
//     }
//   }
//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// bool isOk(vector<int> a, ll mid, ll m)
// {
//   ll total = 0;
//   rep(i, 0, a.size()) total += (ll)min((ll)a[i], mid);
//   if (total <= m)
//     return true;
//   else
//     return false;
// }

// ll binary_search(vector<int> a, ll m)
// {
//   ll left = 0;
//   ll right = 1e15;

//   while (right - left > 1)
//   {
//     ll mid = (right + left) / 2;
//     if (isOk(a, mid ,m))
//       left = mid;
//     else
//       right = mid;
//   }

//   return left;
// }

// int main()
// {
//   ll n, m;
//   cin >> n >> m;
//   vector<int> a(n);
//   rep(i, 0, n) cin >> a[i];

//   ll total = reduce(a.begin(), a.end(), 0LL);
//   if (total <= m)
//   {
//     cout << "infinite" << endl;
//     return 0;
//   }

//   ll ans = binary_search(a , m);
//   cout << ans << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, k;
  string s;
  cin >> n >> k >> s;
  vector<pair<char, int>> rle;

  rep(i, 0, n)
  {
    if (rle.size() && rle.back().first == s[i])
      rle.back().second++;
    else
      rle.push_back(make_pair(s[i], 1));
  }
  int one_cnt = 0;
  rep(i, 0, rle.size())
  {
    if (rle[i].first == '1')
      one_cnt++;
    if (one_cnt == k)
    {
      swap(rle[i], rle[i - 1]);
      break;
    }
  }

  

  string ans = "";
  
  rep(i, 0, rle.size()) ans += string(rle[i].second, rle[i].first);
  cout << ans << endl;
}