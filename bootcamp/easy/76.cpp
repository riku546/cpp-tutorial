#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  map<int, pair<string, int>> memory;

  rep(i, 0, M)
  {
    string status;
    int num;
    cin >> num >> status;

    if (status == "AC")
      memory[num].first = "AC";
    else if (status == "WA" && memory[num].first != "AC")
    {
      memory[num].second++;
    }
  }
  int p_cnt = 0;
  int ac_cnt = 0;
  for (pair<int, pair<string, int>> value : memory)
  {
    if (value.second.first == "AC")
    {
      ac_cnt++;
      p_cnt += value.second.second;
    }
  }

  cout << ac_cnt << ' ' << p_cnt << endl;
}