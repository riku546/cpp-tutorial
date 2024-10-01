#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a = {0};

  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    a.push_back(a[i] + temp);
  }

  int ans = 0;
  rep(i, 0, N - K + 1)
  {
    ans = max(ans, a[i + K] - a[i]);
  }

  cout << ans << endl;
}