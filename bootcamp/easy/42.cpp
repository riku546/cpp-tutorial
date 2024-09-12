// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   string S, T;
//   cin >> S;
//   cin >> T;
//   vector<string> x = {};

//   while (S != T)
//   {
//     rep(i, 0, S.size())
//     {
//       if (S[i] != T[i])
//       {
//         string temp = S;
//         temp[i] = T[i];

//         rep(j, 0, S.size())
//         {
//           string nS = S;
//           if (nS[j] != T[j])
//           {
//             nS[j] = T[j];
//             temp = min(nS, temp);
//                     }
//         }

//         S = temp;
//         x.push_back(temp);
//       }
//     }
//   }
//   cout << x.size() << endl;
//   rep(i, 0, x.size()) cout << x[i] << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N);
  rep(i, 0, N)
  {
    int K;
    cin >> K;
    rep(k, 0, K)
    {
      int temp;
      cin >> temp;
      A[i].push_back(temp);
    }
  }
  int ans = 0;
  rep(m, 1, M + 1)
  {
    bool flag = true;
    rep(n, 0, N)
    {
      if (!count(A[n].begin(), A[n].end(), m))
        flag = false;
    }
    if (flag)
      ans++;
  }
  cout << ans << endl;
}