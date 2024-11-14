#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n ;
  cin >> n;
  string s;
  cin >> s;
  
  rep(i, 0 , n) {
    if(s[i] == '|') {
      rep(j , i + 1 , n){
        if (s[j] == '|') {
          cout << "out" << endl;
          return 0;
        }
        if (s[j] == '*') {
          cout << "in" << endl;
          return 0;
        }
      }
    }
  }
  
}