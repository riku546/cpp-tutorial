#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  string s , t;
  cin >> s >> t;
  rep(i , 0 , s.size()){
    if(s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << t.size() << endl;
}