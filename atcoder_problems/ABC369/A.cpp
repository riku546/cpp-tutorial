#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  if (A == B)
  {
    cout << 1 << endl;
    return 0;
  }

  if ((A + B) % 2 != 0)
  {
    cout << 2 << endl;
    return 0;
  }

  cout << 3 << endl;
}