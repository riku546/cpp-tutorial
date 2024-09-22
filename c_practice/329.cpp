#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int ans = 0;
  int N;
  string S;
  cin >> N >> S;
  int cnt = 1;
  char temp;
  map<char, int> memory;
  rep(i, 0, N)
  {
    temp = S[i];
    if (i + 1 < N && S[i + 1] == temp)
      cnt++;
    else
    {
      if (cnt - memory[S[i]] > 0)
      {
        ans += cnt - memory[S[i]];
        memory[S[i]] = cnt;
      }

      cnt = 1;
    }
  }

  cout << ans << endl;
}