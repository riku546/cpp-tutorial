#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  int ans = 0;
  rep(i, A, B + 1)
  {
    string s = to_string(i);
    string cs = s;
    reverse(cs.begin(), cs.end());
    if (s == cs)
      ans++;
  }

  cout << ans << endl;
}