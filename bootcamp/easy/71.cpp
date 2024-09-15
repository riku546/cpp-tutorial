#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, L;
  cin >> N >> L;
  vector<string> S(N);
  rep(i, 0, N) cin >> S[i];
  sort(S.begin(), S.end());
  rep(i, 0, N) cout << S[i];
  cout << endl;
}