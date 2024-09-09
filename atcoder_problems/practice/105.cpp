#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A = {};
  rep(i, 1, N + 1) A.push_back(i);

  do
  {
    rep(i, 0, N - 1) cout << A[i] << ' ';
    cout << endl;
  } while (next_permutation(A.begin(), A.end()));

}