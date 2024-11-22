#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a >= 8)
  {
    cout << "No" << endl;
    return 0;
  }

  map<int, vector<int>> temp;
  rep(i, 1, 8)
  {
    temp[i].push_back(i * 2);
    temp[i].push_back(i * 2 + 1);
  }

  if(count(temp[a].begin() , temp[a].end() , b)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}