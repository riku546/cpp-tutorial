#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;

  for (int i = 2; i < 17; i += 2)
  {

    if (S[i - 1] != '0')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}