#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int s;
  cin >> s;
  int temp = s;
  set<int> memory;
  memory.insert(s);
  rep(i, 2, 1000000)
  {
    if (s % 2 == 0)
    {
      s /= 2;
    }
    else
    {
      s = 3 * s + 1;
    }
    if (memory.count(s))
    {
      cout << i << endl;
      return 0;
    }
    memory.insert(s);
  }
}