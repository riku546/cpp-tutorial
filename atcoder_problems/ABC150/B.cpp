#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  string S;

  cin >> N;
  cin >> S;
  int ans = 0;
  rep(i, N - 2)
  {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
    {
      ans++;
    }
  }
  cout << ans << endl;
}