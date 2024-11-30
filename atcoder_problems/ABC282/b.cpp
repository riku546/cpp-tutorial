#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n ,m;
  cin >> n >> m;
  string allCorrect = string(m , 'o');
  vector<vector<char>>s(n, vector<char>(m));
  int ans = 0;
  rep(i , 0 , n) rep(j , 0 , m) cin >> s[i][j];
  rep(i , 0 , n) {
    rep(j , i + 1, n) {
    string temp = "";
      rep(k , 0 , m) {
        if(s[i][k] == 'o' || s[j][k] == 'o') temp.push_back('o');
        else temp.push_back('x');
      }
      if(temp == allCorrect) ans++;
    }

  }
  cout << ans <<endl;
}