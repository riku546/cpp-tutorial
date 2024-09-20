#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> memory;
  rep(i, 1, N + 1)
  {
    int p;
    cin >> p;
    memory[p] = i;
  }

  for (pair<int, int> record : memory)
  {
    cout << record.second << ' ';
  }
  cout << endl;
}