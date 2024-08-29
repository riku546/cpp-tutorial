#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N, Q;
  cin >> N;
  vector<int> P(N);
  rep(i, N) cin >> P[i];

  cin >> Q;
  vector<vector<int>> A(Q, vector<int>(2));
  vector<int> result(Q);
  rep(i, Q) cin >> A[i][0] >> A[i][1];
  vector<vector<int>> temp(Q);
  rep(i, Q) rep(j, 2)
  {
    int q1, q2;
    rep(k, N)
    {
      if (P[k] == A[i][0])
      {
        q1 = k;
      }
      else if (P[k] == A[i][1])
      {
        q2 = k;
      }
    }
    result[i] = P[min(q1, q2)];
  }

  rep(i, Q) cout << result[i] << endl;
}