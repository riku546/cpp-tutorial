#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;

  int good = 0;
  rep(i , 0 , n) {
    if(s[i] == 'x') {
      cout <<"No" << endl;
      return 0;
    }
    if(s[i] == 'o') good++;
  }

  if(good) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}