#include <bits/stdc++.h>
#define rep(i,m , n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  long long N;
  cin >> N;

  rep(x, 0, 100)
  {
    rep(y, 0,100)
    {
      if (N == (pow(2, x)) * pow(3, y))
      {
        cout << "Yes" << endl;

        return 0;
      }
    }
  }

  cout << "No" << endl;
}