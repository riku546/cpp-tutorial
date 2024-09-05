#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 100;
  for (int i = 0; i < 101; i += 5)
  {
    if (abs(i - ans) > abs(i - N))
    {
      ans = i;
    }
  }
  cout << ans << endl;
}