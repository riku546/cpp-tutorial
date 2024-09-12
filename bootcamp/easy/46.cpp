#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C;
  ull K;
  cin >> A >> B >> C >> K;

  ll temp = (ll)(B + C) - (A + C);
  if (abs(temp) > 1e18)
  {
    cout << "Unfair" << endl;
    return 0;
  }

  if (K % 2 == 0)
    cout << -1 * temp << endl;
  else
    cout << temp << endl;
}