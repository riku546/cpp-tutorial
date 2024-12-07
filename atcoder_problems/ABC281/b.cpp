#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  string s;
  cin >> s;

  rep(i , 1 ,s.size() - 1){
    if(s[i] >= 'A' && s[i] <= 'Z'){
      cout << "No" << endl;
      return 0;
    }
  }

  if(s[0] < 'A' || s[0] > 'Z') {
    cout << "No" << endl;
    return 0;
  }
  if(s.back() < 'A' || s.back() > 'Z') {
    cout << "No" << endl;
    return 0;
  }



  string temp  = s.substr(1 , s.size() - 2);
  if(stoi(temp) < 1e5 || stoi(temp) > 999999){
    cout << "No" <<endl;
    return 0;
  }

  cout << "Yes" << endl;
}