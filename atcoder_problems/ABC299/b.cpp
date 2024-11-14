#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  vector<int> C(n);
  vector<int> r(n);
  int ans ;
  map<int, vector<pair<int, int>>> temp;
  rep(i, 0, n)
  {
    cin >> C[i];
  }
  rep(i, 0, n) cin >> r[i];

  rep(i , 0 , n) {
    temp[C[i]].push_back(make_pair(r[i] , i));
  }

  if(temp[t].empty()){
    sort(temp[C[0]].begin() , temp[C[0]].end());
    ans = temp[C[0]].back().second;
  }else{
    sort(temp[t].begin() , temp[t].end());
    ans = temp[t].back().second;
  }

  cout << ans + 1 << endl;
}