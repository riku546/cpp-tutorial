#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n , q;
  cin >> n >> q;
  set<pair<int , int>>ff;

  rep(i , 0 , q){
    int t , a , b;
    cin >> t >> a >> b;

    if(t == 1) ff.insert(make_pair(a, b));
    if(t == 2) ff.erase(make_pair(a , b));
    if(t == 3){
      if(ff.count(make_pair(a , b)) && ff.count(make_pair(b , a))) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}