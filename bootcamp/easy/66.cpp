#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  set<char> directions;
  rep(i, 0, S.size()) directions.insert(S[i]);
  if (directions.size() == 4)
  {
    cout << "Yes" << endl;
  }
  else if (directions.size() == 2)
  {
    vector<char> memory = {};
    for (auto value : directions)
      memory.push_back(value);
    if (count(memory.begin(), memory.end(), 'N') && count(memory.begin(), memory.end(), 'S'))
      cout << "Yes" << endl;
    else if (count(memory.begin(), memory.end(), 'E') && count(memory.begin(), memory.end(), 'W'))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  else
    cout << "No" << endl;
}