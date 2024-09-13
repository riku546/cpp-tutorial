#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  rep(i, 1, 1e4)
  {
    if (floor(i * 0.08) == A && floor(i * 0.1) == B)
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}