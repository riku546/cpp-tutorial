#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  deque<int> dq;
  int i = 1;
  while (dq.size() < 10)
  {
    if (i % 5 == 0)
      dq.pop_back();
    else if (i % 3 == 0)
      dq.pop_front();
    else
    {
      if (i % 2 == 0)
        dq.push_back(i);
      else
        dq.push_front(i);
    }
    i++;
  }

  while (!dq.empty())
  {
    cout << dq.front() << endl;
    dq.pop_front();
  }
  
}