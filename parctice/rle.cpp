#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n , k;
  string s;
  cin >> n >> k >> s;
  vector<pair<char, int>> rle = {};
  rep(i, 0, s.size())
  {
    if (rle.size() != 0 && rle.back().first == s[i])
    {
      rle.back().second++;
    }
    else
    {
      rle.push_back(make_pair(s[i], 1));
    }
  }

  int one_cnt = 0;
  rep(i , 0 , rle.size()){
    if(rle[i].first == '1') one_cnt++;
    if(one_cnt == k) swap(rle[i] , rle[i - 1]);
  }

  string ans = "";
  for(auto var : rle)
  {
    ans += string(var.second , var.first);
  }
  cout << ans << endl;
}
