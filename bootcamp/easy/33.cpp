#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  string S;
  cin >> S;

  if (S[A] != '-')
  {
    cout << "No" << endl;
    return 0;
  }

  rep(i, 0, S.size())
  {
    if (i == A)
      continue;
    int num = S[i] - '0';

    if (num < 0 || num > 9)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}