#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<int> memory = {};
  if (S[0] != 'A')
  {
    cout << "WA" << endl;
    return 0;
  }

  rep(i, 2, S.size() - 1)
  {
    if (S[i] == 'C')
      memory.push_back(i);
  }

  if (memory.size() != 1)
  {
    cout << "WA" << endl;
    return 0;
  }

  rep(i, 1, S.size())
  {
    if (i == memory[0])
      continue;
    if (S[i] >= 'a' && S[i] <= 'z') continue;
    cout << "WA" << endl;
    return 0;
  }

  cout << "AC" << endl;
}
