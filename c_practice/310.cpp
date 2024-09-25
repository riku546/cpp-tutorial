#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, vector<string>> memory;
  set<string> S;
  int cnt = 0;
  rep(i, 0, N)
  {
    string temp;
    cin >> temp;

    if (memory[temp.size()].size() == 0)
    {
      
      memory[temp.size()].push_back(temp);
    }
    else
    {
      bool flag = true;
      string ctemp = temp;
      reverse(ctemp.begin(), ctemp.end());
      for (auto var : memory[temp.size()])
      {
        if (temp == var || ctemp == var)
        {
          flag = false;
          break;
        }
      }
      if (flag)
        memory[temp.size()].push_back(temp);
    }
  }
  int ans = 0;
  for (auto var : memory)
  {
    ans += var.second.size();
  }
  cout << ans << endl;
}