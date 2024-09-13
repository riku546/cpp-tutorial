#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

bool isInteger(double num)
{
  return floor(num) == num;
}

int main()
{
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));
  rep(i, 0, N) rep(j, 0, D) cin >> X[i][j];
  int ans = 0;
  rep(i, 0, N)
  {
    rep(j, i + 1, N)
    {
      int temp = 0;
      rep(k, 0, D) temp += pow(X[i][k] - X[j][k], 2);
      if (isInteger(pow(temp, 0.5)))
        ans++;
    }
  }
  cout << ans << endl;
}