#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  set<int> A;
  ll total = ((ll)k * (k + 1)) / 2;
  rep(i, 0, n)
  {
    int a;
    cin >> a;
    A.insert(a);
  }
  

  for (auto var : A)
  {
    if(var > k) continue;
    total -= (ll)var;
  }

  cout << total << endl;
}