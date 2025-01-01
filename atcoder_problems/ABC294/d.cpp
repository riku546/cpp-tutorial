#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  set<int> called;
  int n, q;
  cin >> n >> q;
  int temp = 1;
  rep(i, 0, q)
  {
    int e;
    cin >> e;
    if (e == 1)
    {
      called.insert(temp);
      temp++;
    }
    else if (e == 2)
    {
      int x;
      cin >> x;
      called.erase(x);
    }
    else
    {
      cout << *begin(called) << endl;
    }
  }
}