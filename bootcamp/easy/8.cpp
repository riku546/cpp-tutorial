#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;
  int num = stoi(a + b);

  rep(i, 1, 1e4)
  {
    if (num == i * i)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}