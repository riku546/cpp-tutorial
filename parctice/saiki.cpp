#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int kuku(int n)
{
  if (n == 0)
    return 0;

  kuku(n - 1);

  rep(i, 1, 10) cout << i * n << ' ';
  cout << endl;

  return 0;
}

int main()
{
  kuku(9);
}