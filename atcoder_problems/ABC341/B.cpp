#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<vector<int>> st(N - 1, vector<int>(2));
  rep(i, N - 1) rep(j, 2) cin >> st[i][j];

  rep(i, st.size())
  {
    if (st[i][0] <= A[i])
    {
      A[i] -= st[i][0];
      A[i] += st[i][1];
    }
  }

  sort(A.begin(), A.end());
  cout << endl;
  cout << A[N - 1] << endl;
}