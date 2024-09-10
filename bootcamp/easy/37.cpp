#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(Q);
  rep(i, 0, Q) cin >> A[i];

  int temp = Q - K + 1;
  if (temp <= 0)
  {
    rep(i, 0, N) cout << "Yes" << endl;
    return 0;
  }
  vector<int> cnt(N);
  rep(i, 0, Q) cnt[A[i] - 1]++;
  rep(i, 0, N)
  {
    if (cnt[i] >= temp)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}