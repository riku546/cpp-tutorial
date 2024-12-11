#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  vector<vector<int>>list = {{2 , 1 , 2} , {1 , 2, 3} , {1 , 2 , 2} , {2 , 2 ,2}};
  sort(list.begin() , list.end());
  rep(i , 0 , list.size()) {
    rep(j , 0 ,list[i].size()) cout << list[i][j] << ' ';
    cout << endl;
  }
}