#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N;
  cin >> S;

  int ans = 0;
  int temp = 0;
  rep(i, 0, N)
  {
    if (S[i] == 'I')
      temp++;
    else
      temp--;
    ans = max(ans, temp);
  }

  cout << ans << endl;
}