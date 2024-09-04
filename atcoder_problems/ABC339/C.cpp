#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  long long total = reduce(A.begin(), A.end());
  long long left = 0;
  long long right = pow(10, 9);

  while (left < right)
  {
    long long center = (left + right) / 2;
    if (total + center < 0)
    {
      left = center + 1;
    }
    else
      right = center;
  }
  // cout << endl;
  // cout << left << endl;
  cout << left << ' ' << total << endl;
  cout << left + total << endl;
}