#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n , q;
  cin >> n;
  vector<int>a(n);
  rep(i , 0 , n) cin >> a[i];
  cin >> q;
  rep(i , 0 , q) {
    int j ;
    cin >> j;
    if(j == 1) {
      int k , x;
      cin >> k >> x;
      a[k - 1] = x;
    }else{
      int k;
      cin >> k;
      cout << a[k- 1] << endl;
    }
  }

}