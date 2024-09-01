#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N;
  cin >> S;

  rep(i, 0, N)
  {
    if (S[i] == 'A')
    {
      if (S[i + 1] == 'B' && S[i + 2] == 'C')
      {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }

  cout << -1 << endl;
}