#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  rep(i, 0, s.size())
  {
    if (s[i] == 'a')
    {
      cout << s.size() - i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}