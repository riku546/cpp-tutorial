#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;

  cin >> N;
  vector<int> T(N);
  rep(i, 0, N) cin >> T[i];
  cin >> M;
  vector<vector<int>> P(M, vector<int>(2));
  rep(i, 0, M) cin >> P[i][0] >> P[i][1];

  rep(i, 0, M)
  {
    int temp = P[i][1];
    rep(j, 0, N)
    {

      if (P[i][0] - 1 == j)
        continue;
      temp += T[j];
    }
    cout << temp << endl;
  }
}