#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n , p , q , r , s;
  cin >> n >> p >> q >> r >> s;
  vector<int>a(n);
  rep(i , 0 , n) cin >> a[i];

  rep(i , 0 , q - p + 1) {
    swap(a[p + i - 1] , a[r + i - 1]);
  } 
  rep(i , 0 , n) cout << a[i] << ' ';
  cout << endl;
  
}