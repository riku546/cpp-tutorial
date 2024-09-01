#include <bits/stdc++.h>
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)

int main()
{
  int N;
  cin >> N;
  map<int, int> d;
  rep(i, 0, N)
  {
    int n;
    cin >> n;
    d[n] += 1;
  }
  int ans = 0;
  rep(i, 1, 101) if (d[i] != 0) ans++;
  cout << ans << endl;
}