#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll n;
  cin >> n;
  set<ll> ans;
  
  rep(i, 1, pow(n, 1.0 / 2.0) + 1)
  {
    if (n % i == 0)
    {
      ans.insert(i);
      ans.insert(n / i);
    }
  }
  for(auto var : ans)
  {
    cout << var << endl;
  }
}