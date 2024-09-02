#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int M;
  cin >> M;
  vector<int> D(M);
  rep(i, 0, M) cin >> D[i];
  int temp = 0;
  int center = (reduce(begin(D), end(D)) + 1) / 2;

  rep(i, 0, M) rep(j, 1, D[i] + 1)
  {
    temp++;
    if (temp == center)
    {
      cout << i + 1 << ' ' << j;
      return 0;
    }
  }
}