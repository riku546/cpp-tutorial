#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> A(N);
  rep(i, 0, N)
  {
    cin >> A[i].first;
    A[i].second = i + 1;
  };

  sort(A.begin(), A.end());
  rep(i, 0, N) cout << A[i].second << ' ';
  cout << endl;
}