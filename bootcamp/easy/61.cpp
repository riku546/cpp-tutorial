#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  rep(i, 0, S.size())
  {
    char last = S[S.size() - 1];
    string s = S.substr(0, S.size() - 1);
    S = last + s;
    if (S == T)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}