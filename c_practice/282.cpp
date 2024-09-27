#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;

  bool flag = true;
  string ans = "";
  rep(i, 0, N)
  {
    if (S[i] == '"' && flag == true)
      flag = false;
    else if (S[i] == '"' && flag == false)
      flag = true;

    if (S[i] == ',' && flag)
      ans += '.';
    else
      ans += S[i];
  }

  cout << ans << endl;
}