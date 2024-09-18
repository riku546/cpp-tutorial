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
  rep(i, 0, N)
  {
    int a, c;
    cin >> a >> c;
    if (memory[c] == 0)
      memory[c] = a;
    else
      memory[c] = min(memory[c], a);
  }
  int ans = 1;
  for (pair<int, int> value : memory)
  {
    ans = max(ans, value.second);
  }

  cout << ans << endl;
}