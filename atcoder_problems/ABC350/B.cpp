#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q = 0;

  cin >> N >> Q;

  int result = N;
  vector<int> T(Q, 0);
  vector<int> bit_array(N, 1);

  for (int i = 0; i < Q; i++)
  {
    cin >> T[i];
  }

  for (int j = 0; j < Q; j++)
  {
    int current_potion = T[j] - 1;

    if (bit_array[current_potion] == 1)
    {
      bit_array[current_potion] = 0;
      result--;
    }
    else
    {
      bit_array[current_potion] = 1;
      result++;
    }
  }

  cout << result << endl;
  return 0;
}