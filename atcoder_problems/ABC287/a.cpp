#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n;
  cin >> n;
  int cnt = 0;
  rep(i , 0 , n){
    string temp;
    cin >> temp;
    if(temp == "For") cnt++;
  }

  if(cnt > (double) n / 2.0) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}