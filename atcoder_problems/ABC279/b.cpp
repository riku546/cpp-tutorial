#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  if (s.size() < t.size())
  {
    cout << "No" << endl;
    return 0;
  }

  rep(i, 0, s.size() - t.size() + 1)
  {

    string subs = s.substr(i, t.size());
    if (subs == t)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}