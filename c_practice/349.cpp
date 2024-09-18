#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

bool isSubarray(string s, string t)
{
  int si = 0;
  for (auto c : s)
  {
    if (t[si] == c)
      si++;
    if (si == t.size())
      return true;
  }

  return false;
}

int main()
{
  string S, T;
  cin >> S >> T;

  rep(i, 0, T.size()) T[i] = tolower(T[i]);
  if (T.back() == 'x')
    T = T.substr(0, 2);
  if (isSubarray(S, T))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}