#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N;
  cin >> K;
  vector<int> x(N);
  rep(i, 0, N) cin >> x[i];
  int total = 0;

  rep(i, 0, N)
  {
    total += min(x[i] * 2, abs(K - x[i]) * 2);
  }

  cout << total << endl;
}