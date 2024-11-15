#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> S(n);
  vector<string> T(m);

  rep(i, 0, n) cin >> S[i];
  rep(i, 0, m) cin >> T[i];
  int ans = 0;
  rep(i, 0, n)
  {
    string temp = S[i].substr(3, 3);
    rep(j, 0, m)
    {
      if (temp == T[j]){
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
}