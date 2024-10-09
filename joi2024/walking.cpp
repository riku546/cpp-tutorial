#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int X;
  cin >> X;

  if (X % 2 == 0)
  {
    cout << X / 2 << endl;
  }else {
    cout << X / 2 + 3 << endl;
  }
}