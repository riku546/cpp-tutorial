#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K, j = 0;
  cin >> N >> K;
  int result = 0;
  int t = 0;
  vector<int> A(N, 0);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  while (j < N)
  {

    if (t >= A[j])
    {
      t -= A[j];
      j++;
    }
    else
    {
      result++;
      t = K;
    }
  }

  cout << result << endl;
}