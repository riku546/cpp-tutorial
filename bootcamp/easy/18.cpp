#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  rep(i, 0, M) cin >> A[i];
  int left = 0;
  int right = 0;

  rep(i, 0, M)
  {
    if (A[i] < X)
      left++;
    else if (A[i] > X)
      right++;
  }

  cout << min(left, right) << endl;
}