#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  vector<int> A(4);
  rep(i, 0, 4) cin >> A[i];
  ll total = reduce(A.begin(), A.end(), 0LL);
  cout << total << endl;
}
