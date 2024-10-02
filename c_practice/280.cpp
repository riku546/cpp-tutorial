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
    if (S[i] != T[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << T.size() << endl;
}