#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int t;
  cin >> t;
  rep(i , 0 , t) {
    int n , ans = 0; 
    cin >> n;
    vector<int>temp(n);
    rep(j , 0 , n) cin >> temp[j];
    for(auto var : temp)
    {
      if(var % 2 != 0) ans++;
    }
    cout << ans << endl;
  }
}