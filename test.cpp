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

//   int right = 0;
//   ll ans = 0;

//   rep(left, 0, n)
//   {
//     while (right < n && a[right] < a[left] * 2)
//     {
//       right++;
//     }

//     ans += n - right;

//     // whileでrightがインクリメントされなかったとき
//     if (left == right)
//       right++;
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
//   ll k;
//   cin >> n >> k;
//   vector<int> s(n);
//   rep(i, 0, n) cin >> s[i];

//   rep(i , 0 , n){
//     if(s[i] == 0){
//       cout << n << endl;
//       return 0;
//     }
//   }

//   int ans = 0;
//   int right = 0;
//   ll temp = 1;

//   rep(left, 0, n)
//   {
//     while (right < n && (ll)temp * s[right] <= k)
//     {
//       temp *= s[right];
//       right++;
//     }

//     ans = max(ans, right - left);

//     if (left == right)
//       right++;
//     else
//       temp /= s[left];
//   }

//   cout << ans << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  int right = 0;
  ll ans = 0;

  rep(left, 0, n)
  {
    while (right < n - 1 && a[right] < a[right + 1])
    {
      right++;
    }

    ans += right - left;

    if (right == left)
    {
      right++;
    }
  }
  cout << ans + n << endl;
}