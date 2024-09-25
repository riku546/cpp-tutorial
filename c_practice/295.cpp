#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> cnt;
  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    cnt[temp]++;
  }

  int ans = 0;
  for (auto var : cnt)
  {
    ans += var.second / 2;
  }

  cout << ans << endl;
}