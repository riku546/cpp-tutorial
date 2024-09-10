// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int A, B, M;
//   cin >> A >> B >> M;
//   vector<int> a(A);
//   vector<int> b(B);
//   vector<vector<int>> xy(M, vector<int>(3));
//   rep(i, 0, A) cin >> a[i];
//   rep(i, 0, B) cin >> b[i];
//   rep(i, 0, M) rep(j, 0, 3) cin >> xy[i][j];
//   int ans = 1e9;
//   rep(i, 0, A)
//   {
//     rep(j, 0, B)
//     {
//       int temp = 0;
//       rep(k, 0, M)
//       {
//         if (xy[k][0] == i + 1 && xy[k][1] == j + 1)
//         {
//           temp = a[i] + b[j] - xy[k][2];
//           ans = min(ans, temp);
//         }
//       }
//       if (temp == 0)
//         ans = min(ans, a[i] + b[j]);
//     }
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
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A);
  vector<int> b(B);
  vector<vector<int>> xy(M, vector<int>(3));
  rep(i, 0, A) cin >> a[i];
  rep(i, 0, B) cin >> b[i];
  rep(i, 0, M) rep(j, 0, 3) cin >> xy[i][j];
  int ans = 1e9;

  rep(i, 0, M)
  {
    ans = min(ans, a[xy[i][0] - 1] + b[xy[i][1] - 1] - xy[i][2]);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ans = min(ans, a[0] + b[0]);

  cout << ans << endl;
}