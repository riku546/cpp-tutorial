#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  ll total = (k * (k + 1) ) / 2;
  vector<int>a(n);
  rep(i , 0 , n) cin >> a[i] ;
  rep(i , 0 , n){
    total -= a[i];
  }
  
}