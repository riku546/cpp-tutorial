#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll A, B;
  cin >> A;
  cin >> B;
  cout << endl;
  cout << A << endl;
  cout << B << endl;

  if (A > B)
    cout << "GREATER" << endl;
  else if (A < B)
    cout << "LESS" << endl;
  else
    cout << "EQUAL" << endl;
}