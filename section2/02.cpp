#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, S;
  int result = 0;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    cin >> P.at(i);
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (A[i] + P[j] == S)
      {
        result++;
      }
    }
  }

  cout << result << endl;
}