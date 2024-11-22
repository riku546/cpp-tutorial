#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n ;
  cin >> n ;
  vector<string>s(n);
  rep(i , 0 , n) cin >> s[i];
  reverse(s.begin() , s.end());
  rep(i , 0 , n) cout << s[i] << endl;
}