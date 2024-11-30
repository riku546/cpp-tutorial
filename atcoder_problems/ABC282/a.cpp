#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int k;cin >> k;
  vector<char>temp;
  rep(i , 'A' , 'Z' + 1) {
    temp.push_back(i);
  }

  rep(i, 0 , k) cout << temp[i] ;
  cout << endl;
}