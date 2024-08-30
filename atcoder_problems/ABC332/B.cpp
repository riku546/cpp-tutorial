#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int K, G, M;
  cin >> K >> G >> M;
  int current_g = 0, current_m = 0;
  rep(i, 0, K)
  {
    if (current_g == G)
    {
      current_g = 0;
    }
    else if (current_m == 0)
    {
      current_m = M;
    }
    else
    {

      while (current_m > 0 && current_g < G)
      {
        current_m--;
        current_g++;
      }
    }
  }
  cout << current_g << ' ' << current_m << endl;
}