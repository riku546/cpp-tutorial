#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string O, E;
  cin >> O;
  cin >> E;
  int os = O.size();
  int es = E.size();
  if (abs(os - es) == 0)
  {
    rep(i, 0, O.size())
    {
      cout << O[i];
      cout << E[i];
    }
    cout << endl;
  }
  else
  {
    rep(i, 0, E.size())
    {
      cout << O[i];
      cout << E[i];
    }
    cout << O[O.size() - 1] << endl;
  }
}