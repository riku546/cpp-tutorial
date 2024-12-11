#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;


int main()
{
  string x;
  int n;
  cin >> x >> n;
  vector<vector<int>> temp(n);
  map<char, int> p1;
  map<int, char> p2;

  rep(i, 0, x.size())
  {
    p1[x[i]] = i + 1;
    p2[i + 1] = x[i];
  }

  rep(i, 0, n)
  {
    string s;
    cin >> s;

    rep(j, 0, s.size()) temp[i].push_back(p1[s[j]]);
  }

  sort(temp.begin(), temp.end());
  rep(i, 0, n)
  {
    rep(j, 0, temp[i].size())
    {
      cout << p2[temp[i][j]] ;
    }

    cout << endl;
  }
}