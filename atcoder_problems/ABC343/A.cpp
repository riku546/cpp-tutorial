#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int total = A + B;
  rep(i, 9)
  {
    if (i == total)
      continue;
    cout << i << endl;
    return 0;
  }
}