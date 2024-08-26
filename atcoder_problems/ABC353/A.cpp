#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N = 0;

  cin >> N;

  vector<int> H(N, 0);
  for (int i = 0; i < N; i++)
  {

    cin >> H[i];
  }

  for (int j = 1; j < N; j++)
  {
    if (H[0] < H[j])
    {
      cout << j + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}