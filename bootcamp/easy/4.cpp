#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;

  rep(x, 1, 1e8)
  {
    int temp = x * 1.08;
    if (temp == N)
    {
      cout << x << endl;
      return 0;
    }
  }

  cout << ":(" << endl;
}