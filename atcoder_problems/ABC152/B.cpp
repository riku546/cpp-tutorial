#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
  // int a , b;
  // cin >> a >> b;

  // string re_a = "" , re_b = "";

  // rep(i , b) re_a += to_string(a);
  // rep(i , a) re_b += to_string(b);

  // if(re_a >= re_b) cout << re_b <<endl;
  // else cout << re_a << endl;

  vector<string>s ={ "ad" ,"ab"  , "ac" ,"aa" , "ae"};
  sort(s.begin() , s.end());
  rep(i , s.size()) cout << s[i] << endl;
}