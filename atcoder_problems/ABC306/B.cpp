#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;





long long self_pow(int value, int i)
{
  ull result = 1;
  rep(j, 0, i ) result *= value;
  return result;
}

int main()
{
  vector<int> A(64);
  rep(i, 0, 64) cin >> A[i];
  ull ans = 0;

  rep(i, 0, 64)
  {
    if (A[i] == 1)
    {
      ans += self_pow(2, i);
    }
  }

  cout << ans << endl;
}