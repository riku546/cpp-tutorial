#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n;cin >> n;
  int ans = 0;
  rep(i , 0 , n){
    int x;cin >> x;
    ans += x;
  }

  cout << ans << endl;
}