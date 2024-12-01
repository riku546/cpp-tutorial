#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, 0, n) cin >> h[i];
  ll t = 0;

  rep(i, 0, n)
  {
    int temp = h[i] / 5;
    h[i] %= 5;
    t += temp * 3;
    
    while (h[i] > 0)
    {
      t++;
      if(t % 3 == 0) h[i] -= 3;
      else h[i]--;
      
    }

  }

  cout << t << endl;
}