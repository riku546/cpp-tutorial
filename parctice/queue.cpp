#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  queue<int> q;
  int i = 1;
  while (q.size() < 10)
  {
    if (i % 3 == 0)
      q.pop();
    else
      q.push(i);
    i++;
  }

  while (!q.empty())
  {
    cout << q.front() << endl;
    q.pop();
  }
}