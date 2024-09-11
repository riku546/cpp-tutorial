#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int Q;
  cin >> Q;

  map<int, int> memory;
  vector<vector<int>> temp(Q);
  rep(i, 0, Q)
  {
    int q1, q2;
    cin >> q1;
    temp[i].push_back(q1);
    if (q1 != 3)
    {
      cin >> q2;
      temp[i].push_back(q2);
    }
  }

  rep(i, 0, Q)
  {
    int q1 = temp[i][0];
    if (q1 == 1)
    {
      int q2 = temp[i][1];
      memory[q2] += 1;
    }
    else if (q1 == 2)
    {
      int q2 = temp[i][1];
      memory[q2] -= 1;
      if (memory[q2] == 0)
        memory.erase(q2);
    }
    else if (q1 == 3)
    {
      cout << memory.size() << endl;
    }
  }
}