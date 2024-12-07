#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll n, t;
  cin >> n >> t;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];
  ll total = reduce(a.begin(), a.end(), 0LL);
  t = t % total;
  rep(i ,0 , n) {
    if(t <= a[i]){
      cout << i + 1 << ' ' <<  t << endl;
      return 0;
    }
    else {
      t -=a[i];
    }
  }

}