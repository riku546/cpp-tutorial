// // #include <bits/stdc++.h>
// // #define rep(i, m, n) for (int i = m; i < n; i++)
// // using ull = unsigned long long;
// // using ll = long long;
// // using namespace std;

// // int main()
// // {
// //   int N, K;
// //   cin >> N >> K;
// //   vector<int> a = {0};

// //   rep(i, 0, N)
// //   {
// //     int temp;
// //     cin >> temp;
// //     a.push_back(a[i] + temp);
// //   }

// //   int ans = 0;
// //   rep(i, 0, N - K + 1)
// //   {
// //     ans = max(ans, a[i + K] - a[i]);
// //   }

// //   cout << ans << endl;
// // }

// // #include <bits/stdc++.h>
// // #define rep(i, m, n) for (int i = m; i < n; i++)
// // using ull = unsigned long long;
// // using ll = long long;
// // using namespace std;

// // int main()
// // {
// //   int N;
// //   cin >> N;
// //   vector<int> A(N);
// //   vector<ll> memory(N + 1);

// //   rep(i, 0, N)
// //   {
// //     int a;
// //     cin >> a;
// //     A[i] = a;
// //     memory[i + 1] = (ll)memory[i] + a;
// //   }

// //   rep(i, 1, N + 1)
// //   {
// //     ll ans = 0;
// //     rep(j, 0, memory.size() - i)
// //     {
// //       ans = max(ans, memory[j + i] - memory[j]);
// //     }
// //     cout << ans << endl;
// //   }
// // }

// // #include <bits/stdc++.h>
// // #define rep(i, m, n) for (int i = m; i < n; i++)
// // using ull = unsigned long long;
// // using ll = long long;
// // using namespace std;

// // int main()
// // {
// //   int N, Q;
// //   string S;
// //   cin >> N >> Q >> S;
// //   vector<int> memory(N - 1);
// //   vector<ll> sum(N);
// //   rep(i, 0, N - 1) memory[i] = (S[i] == S[i + 1]);
// //   rep(i, 0, N - 1) sum[i + 1] = sum[i] + memory[i];

// //   rep(i, 0, Q)
// //   {
// //     int l, r;
// //     cin >> l >> r;
// //     l--, r--;
// //     cout << sum[r] - sum[l] << endl;
// //   }
// // }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {

//   int N, Q;
//   string S;
//   cin >> N >> Q >> S;
//   vector<int> memory(N - 1);
//   vector<ll> sum(N);
//   rep(i, 0, N - 1) memory[i] = (S[i] == S[i + 1]);
//   rep(i, 0, N - 1) sum[i + 1] = sum[i] + memory[i];

//   rep(i, 0, Q)

//   {
//     int a;
//     cin >> a;
//     sum[i + 1] = sum[i] + a;
//   }
//   rep(i, 0, N + 1) cout << sum[i] << endl;
//   ll ans = 0;
//   rep(i, 0, N - K + 1) ans += sum[i + K] - sum[i];
//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {

//   int N, Q;
//   string S;
//   cin >> N >> Q >> S;
//   vector<int> memory(N - 1);
//   vector<ll> sum(N);
//   rep(i, 0, N - 1) memory[i] = (S[i] == S[i + 1]);
//   rep(i, 0, N - 1) sum[i + 1] = sum[i] + memory[i];

//   rep(i, 0, Q)
//   {
//     int l, r;
//     cin >> l >> r;
//     l--, r--;
//     cout << sum[r] - sum[l] << endl;
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
//   string s;
//   cin >> n >> s;

//   vector<int> sum(n + 1);
//   rep(i, 0, n)
//   {
//     if (s[i] == 'E')
//       sum[i + 1] = sum[i] + 1;
//     else
//       sum[i + 1] = sum[i];
//   }

//   int ans = 3e6;
//   rep(i, 0, n)
//   {
//     ans = min(ans, i - (sum[i] - sum[0]) + (sum.back() - sum[i + 1]));
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
  int n, k;
  cin >> n >> k;
  vector<ll>temp(n + 1);
  rep(i , 1 , n + 1){
    int a;
    cin >> a;
    temp[i] = temp[i - 1] + a;
  }
  ll ans = 0;
  rep(i , 0 , n - k + 1){
    ans += temp[i + k] - temp[i];
  }
  cout << ans << endl;
}