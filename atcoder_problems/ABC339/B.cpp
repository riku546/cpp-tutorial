#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int64_t current = 0, first = 0;
  for (size_t i = 0; i < N; i += 2)
  {
    if (A[i] + A[i + 1] + current < 0)
    {
      first += abs(A[i] + A[i + 1] + current);
      current = 0;
    }
    else if (A[0] + current < 0)
    {
      first += (A[0] * -1);
    }
    else
    {
      current += A[i] + A[i + 1];
    }
  }

  int64_t result = 0;
  rep(i, N) result += A[i];
  cout << endl
       << result;
  result += first;
  cout << result << endl;
}