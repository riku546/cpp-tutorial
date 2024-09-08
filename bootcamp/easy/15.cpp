#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, 0, N) cin >> d[i];

  if (d.size() % 2 != 0)
  {
    cout << 0 << endl;
  }
  else
  {
    sort(d.begin(), d.end());
    int mid = d.size() / 2;
    cout << d[mid] - d[mid - 1] << endl;
  }
}