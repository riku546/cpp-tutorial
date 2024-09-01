#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  string sN = to_string(N);

  rep(i, 0, sN.size() - 1)
  {
    if (int(sN[i]) <= int(sN[i + 1]))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}