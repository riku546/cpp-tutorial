#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, 0, N) cin >> X[i];
  int ans = 2e9;
  rep(p, 1, 101)
  {
    int temp = 0;
    rep(i, 0, N)
    {
      temp += pow(X[i] - p, 2);
    }
    ans = min(ans, temp);
  }

  cout << ans << endl;
}