#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int N , M;
  cin >> N >> M;
  vector<vector<int>>k(M);
  vector<int>P(M);
  rep(i , 0 , M) {
    int km ;
    cin >> km;
    rep(j , 0 , km) {
      int temp;
      cin >> temp;
      k[i].push_back(temp);
    }
  };
  rep(i , 0 , M) cin >> P[i];
int ans = 0;
 rep(i , 0 , 1 << N){
  bool flag = true;
  vector<int>temp = {};
  rep(j , 0 , N) {
    if(i & (1 << j)) {
      temp.push_back(j);
      }
    }
    rep(m , 0 , M){
      int cnt = 0;
      rep(n , 0 ,k[m].size()){
        if(count(temp.begin() , temp.end() , n)) cnt++;
      }
      if(cnt%2!=P[m]) flag = false;
    }

    if(flag ) ans++;
  }

  cout << ans << endl;
 }
