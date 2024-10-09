#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;

  string ans = "";
  rep(i, 0, N)
  {
    if (S[i] == 'J')
      ans += 'O';
    else if (S[i] == 'O')
      ans += 'I';
    else
      ans += 'J';
  }
  cout << ans << endl;
}