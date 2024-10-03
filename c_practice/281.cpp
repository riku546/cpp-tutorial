#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  ll T;
  cin >> N >> T;
  ll total = 0;
  vector<int> A(N);
  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    A[i] = temp;
    total += (ll)temp;
  }
  ll ans1;
  ll ans2;

  if (total < T)
  {
    
    ll temp = T % total;
    ll num = 0;
    rep(i, 0, N)
    {
      num += (ll)A[i];
        
      if (temp <= num)
      {
        ans1 = i + 1;
        ans2 = A[i] - ( num - temp);
        cout << ans1 << ' ' << ans2 << endl;
        return 0;
      }
    }
  }
  else
  {
    ll num = 0;
    rep(i, 0, N)
    {
      num += A[i];
      if (T <= num)
      {
        ans2 = A[i] - ( num - T);
        ans1 = i + 1;

        cout << ans1 << ' ' << ans2 << endl;
        return 0;
      }
    }
  }
}