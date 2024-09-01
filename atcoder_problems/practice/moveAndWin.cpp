#include <bits/stdc++.h>
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  if ((A % 2 == 0 && B % 2 == 0) || (A % 2 != 0 && B % 2 != 0))
  {
    cout << "Alice" << endl;
  }
  else
  {
    cout << "Borys" << endl;
  }
}