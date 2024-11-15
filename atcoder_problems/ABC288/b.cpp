#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n , k;
  cin >> n >> k;
  vector<string>s(n);
  vector<string>ans;
  rep(i , 0 , n) cin >> s[i];
  rep(i , 0, k) {
    ans.push_back(s[i]);
  }
  sort(ans.begin() , ans.end());
  rep(i , 0 , k) cout << ans[i] << endl;
}