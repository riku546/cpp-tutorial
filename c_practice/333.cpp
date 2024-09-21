#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<ll> temp = {};

  rep(i, 1, 13)
  {
    rep(j, 1, 13)
    {
      rep(k, 1, 13)
      {
        temp.insert(stoll(string(i, '1')) + stoll(string(j, '1')) + stoll(string(k, '1')));
      }
    }
  }

  
       
  int cnt = 1;
  for (auto var : temp)
  {
    if (cnt == N)
    {
      cout << var << endl;
      return 0;
    }
    else
    {
      cnt++;
    }
  }

}