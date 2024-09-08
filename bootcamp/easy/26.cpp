#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll H;
  cin >> H;

  ll temp = H;
  int cnt = 0;
  while (temp > 1)
  {
    temp /= 2;
    cnt++;
  }

  ull result = 1;
  rep(i, 1, cnt + 1)
  {
    ull temp = 1;
    rep(j, 0, i)
    {
      temp *= 2;
    }
    result += temp;
  }

  cout << result << endl;
}