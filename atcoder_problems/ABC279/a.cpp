#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int ans = 0;
  string s;
  cin >> s;
  rep(i, 0, s.size())
  {
    if (s[i] == 'v')
      ans++;
    else
      ans += 2;
  }
  cout << ans << endl;
}