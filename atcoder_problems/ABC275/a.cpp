#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> h(n);
  rep(i , 0 , n){
    int h1;
    cin >> h1;
    h.push_back(make_pair(h1 , i + 1));
  }

  sort(h.begin() , h.end());
  cout << h.back().second << endl;
}