#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a <= 0 && b >= 0)
  {
    cout << "Zero" << endl;
  }
  else if (a > 0 && b > 0)
  {
    cout << "Positive" << endl;
  }
  else if (a < 0 && b < 0)
  {
    if ((abs(a) - abs(b) + 1) % 2 == 0)
    {
      cout << "Positive" << endl;
    }
    else
    {
      cout << "Negative" << endl;
    }
  }
}