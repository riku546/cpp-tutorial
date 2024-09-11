#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  int ans = 1e9;

  rep(i, 0, S.size() - 2)
  {
    string cs = S;

    ans = min(ans, abs(753 - stoi(cs.substr(i, 3))));
  }
  cout << ans << endl;
}