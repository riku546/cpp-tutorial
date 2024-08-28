#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;

  cin >> N;
  int ans = 0;
  for (size_t i = 1; i < N + 1; i++)
  {
    if (to_string(i).size() % 2 != 0)
    {
      ans++;
    }
  }

  cout << ans << endl;
}