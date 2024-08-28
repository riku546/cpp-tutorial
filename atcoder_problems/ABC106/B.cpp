#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 0;

  for (size_t i = 1; i < N + 1; i++)
  {

    int cnt = 0;
    if (i % 2 == 0)
      continue;

    for (size_t j = 1; j <= i; j++)
    {

      if (i % j == 0)
      {
        cnt++;
      }
    }
    if (cnt == 8)
    {
      ans++;
    }
  }

  cout << ans << endl;
}