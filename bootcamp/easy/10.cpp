#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i , 0 , N) cin >> a[i];

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int alice = 0;
  int bob = 0;

  rep(i, 0, N)
  {
    if (i % 2 == 0)
    {
      alice += a[i];
    }
    else
    {
      bob += a[i];
    }
  }

  cout << alice - bob << endl;
}