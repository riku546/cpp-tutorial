#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> u(N);
  rep(i, 0, N) cin >> u[i];
  sort(u.begin(), u.end());
  double ans = (u[0] + u[1]) / 2.00;
  rep(i, 2, u.size())
  {
    double temp = (ans + u[i]) / 2.00;
    ans = temp;
  }

  cout << ans << endl;
}