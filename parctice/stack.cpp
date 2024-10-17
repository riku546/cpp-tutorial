#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  stack<int> s;
  int i = 1;
  while (s.size() < 10)
  {
    if (i % 5 == 0)
      s.pop();
    else
      s.push(i);
    i++;
  }

  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }
}