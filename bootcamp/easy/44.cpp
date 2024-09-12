#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  char temp1;
  char temp2;
  if (S[0] == '0')
  {
    temp1 = '0';
    temp2 = '1';
  }
  else
  {
    temp1 = '1';
    temp2 = '0';
  }
  int ans = 0;
  rep(i, 1, S.size())
  {
    if (i % 2 == 0 && S[i] == temp2)
      ans++;
    else if (i % 2 != 0 && S[i] == temp1)
      ans++;
  }

  cout << ans << endl;
}