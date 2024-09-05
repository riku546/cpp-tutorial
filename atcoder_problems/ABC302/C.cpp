#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()


{
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  rep(i, 0, N) cin >> S[i];
  sort(S.begin(), S.end());

  do
  {
    bool flag = true;
    rep(i, 0, N - 1)
    {
      int cnt = 0;
      rep(j, 0, M)
      {
        if (S[i][j] != S[i + 1][j])
          cnt++;
      }
      if (cnt != 1)
      {
        flag = false;
      }
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));

  cout << "No" << endl;
}
