#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  int cnt = 0;
  int ans;
  int index = 1;
  rep(i, 0, N)
  {
    if (a[i] == index)
    {
      cnt++;
      index++;
    }
  }

  if (cnt == 0)
    cout << -1 << endl;
  else
    cout << N - cnt << endl;
}