#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  long long resultA = A;
  long long resultB = B;

  rep(i, 0, B - 1) resultA *= A;
  rep(i, 0, A - 1) resultB *= B;
  cout << resultA + resultB << endl;
}