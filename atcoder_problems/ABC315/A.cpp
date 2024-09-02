#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;

  string ans = "";
  rep(i, 0, S.size())
  {
    if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
      continue;

    ans += S[i];
  }
  cout << ans << endl;
}