// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int N, K;
//   cin >> N >> K;
//   vector<int> a = {0};

//   rep(i, 0, N)
//   {
//     int temp;
//     cin >> temp;
//     a.push_back(a[i] + temp);
//   }

//   int ans = 0;
//   rep(i, 0, N - K + 1)
//   {
//     ans = max(ans, a[i + K] - a[i]);
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
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   vector<ll> memory(N + 1);

//   rep(i, 0, N)
//   {
//     int a;
//     cin >> a;
//     A[i] = a;
//     memory[i + 1] = (ll)memory[i] + a;
//   }

//   rep(i, 1, N + 1)
//   {
//     ll ans = 0;
//     rep(j, 0, memory.size() - i)
//     {
//       ans = max(ans, memory[j + i] - memory[j]);
//     }
//     cout << ans << endl;
//   }
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<ll> sum(N + 1);
  rep(i, 0, N)
  {
    int a;
    cin >> a;
    sum[i + 1] = (ll)sum[i] + a;
  }

  rep(k, 1, N + 1)
  {
    ll ans = 0;
    rep(j, 0, sum.size() - k) ans = max(ans, (ll)sum[j + k] - sum[j]);
    cout << ans << endl;
  }
}