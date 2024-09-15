#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, int> memory;
  int max_cnt = 0;
  rep(i, 0, N)
  {
    string temp;
    cin >> temp;

    memory[temp]++;
    max_cnt = max(max_cnt, memory[temp]);
  }

  for (pair<string, int> value : memory)
  {
    if (value.second == max_cnt)
      cout << value.first << endl;
  }
}