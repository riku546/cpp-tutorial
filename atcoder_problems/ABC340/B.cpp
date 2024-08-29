#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int Q;
  cin >> Q;
  vector<int> A = {};
  vector<vector<int>> query(Q, vector<int>(2));
  rep(i, Q) cin >> query[i][0] >> query[i][1];

  rep(i, Q)
  {
    if (query[i][0] == 1)
    {
      A.push_back(query[i][1]);
    }
    else if (query[i][0] == 2)
    {
      cout << A[A.size() - query[i][1]] << endl;
    }
  }
}