#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A = {};
  rep(i, 0, N - 1)
  {
    int temp;
    cin >> temp;
    A.push_back(temp);
  }

  rep(i, 0, 101)
  {
    vector<int> copyA(N - 1);
    int total = 0;
    copy(begin(A), end(A), begin(copyA));
    copyA.push_back(i);
    sort(copyA.begin(), copyA.end());
    rep(j, 1, copyA.size() - 1) {total += copyA[j];
    // cout << copyA[j] << endl;
    };
    if (total >= X)
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}