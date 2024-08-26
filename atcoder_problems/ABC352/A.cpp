#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X, Y, Z = 0;
  cin >> N >> X >> Y >> Z;
  int first_station, last_station = 0;

  first_station = min(X, Y);
  last_station = max(X, Y);

  for (int i = first_station; i < last_station + 1; i++)
  {
    if (i == Z)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}