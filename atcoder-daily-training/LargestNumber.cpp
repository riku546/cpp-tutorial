#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int n;
  cin >> n;
  vector<int>a(n);
  vector<pair<int , int>>ans;
  rep(i , 0 , n) cin >> a[i];
  sort(a.begin() , a.end());
  reverse(a.begin() , a.end());
  rep(i , 0 , n) {
    if(ans.size() && ans.back().first == a[i])ans.back().second++;
    else ans.push_back(make_pair(a[i] , 1));
  }
  rep(i , 0 , ans.size()) cout << ans[i].second << endl;
  rep(i , 0 , n -ans.size())cout << 0 << endl;

}