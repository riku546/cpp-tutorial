#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int default_a = a;
  rep(i, 0, b - 1) a *= default_a;
  cout << a << endl;
}