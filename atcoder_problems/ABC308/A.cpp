#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  vector<int> S(8);
  rep(i, 0, 8) cin >> S[i];

  rep(i, 0, 8)
  {
    if (S[i] % 25 != 0 || (S[i] < 100 || S[i] > 675))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, 0, 7)
  {
    if (S[i] > S[i + 1])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}