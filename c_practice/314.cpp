#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  string S;
  cin >> N >> M;
  cin >> S;
  map<int, vector<int>> memory;
  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    memory[temp].push_back(i);
  }

  rep(i, 1, M + 1)
  {
    string temp2 = S;
    if (memory[i].size() == 1)
      continue;
    rep(j, 0, memory[i].size() - 1) S[memory[i][j + 1]] = temp2[memory[i][j]];
    S[memory[i][0]] = temp2[memory[i].back()];
  }

  cout << S << endl;
}