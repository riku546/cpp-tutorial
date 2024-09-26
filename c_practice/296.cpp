#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  set<int> A;

  rep(n, 0, N)
  {
    int temp;
    cin >> temp;
    A.insert(temp);
    int aj = -1 * (X - temp);
    int ai = X + temp;
    if (A.count(ai) || A.count(aj))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}