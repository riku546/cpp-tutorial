#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 1;
  int cnt = 0;

  rep(i, 1, N + 1)
  {
    int temp = 0;
    int ci = i;
    while (ci % 2 == 0)
    {
      temp++;
      ci /= 2;
    }

    if (cnt < temp)
    {

      ans = i;
      cnt = temp;
    }
  }

  cout << ans << endl;
}