#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N;
  cin >> S;

  string ans = "";
  rep(i, 0, N) rep(j, 0, 2) ans += S[i];
  cout << ans << endl;
}