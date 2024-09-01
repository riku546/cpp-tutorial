#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;
  int ans = 1;
  int size = S.size();
  rep(i, 0, size) rep(j, i + 1, size)
  {
    string ns = S.substr(i, j + 1);
    string revNS = ns;
    reverse(revNS.begin(), revNS.end());
    if (revNS == ns)
      ans = max(ans, j - i + 1);
  }

  cout << ans << endl;
}