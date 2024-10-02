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

//   vector<int> a(N - 1);
//   rep(i, 0, N - 1) a[i] = (S[i] == S[i + 1]);
//   vector<int> sum(N);
//   rep(i, 0, N - 1) sum[i + 1] = sum[i] + a[i];

//   rep(i, 0, Q)
//   {
//     int l, r;
//     cin >> l >> r;
//     l--;
//     r--;
//     int ans = sum[r] - sum[l];
//     cout << ans << '\n';
//   }
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  vector<int> memory(N - 1);
  vector<int> sum(N);
  rep(i, 0, N - 1) memory[i] = (S[i] == S[i + 1]);
  rep(i, 0, N - 1) sum[i + 1] = sum[i] + memory[i];

  rep(i, 0, Q)
  {
    int l, r;
    cin >> l >> r;
    l--, r--;
    cout << sum[r] - sum[l] << '\n';
  }
}