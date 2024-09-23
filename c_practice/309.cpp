#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<pair<int, int>> ab(N);
  ull total = 0;
  rep(i, 0, N)
  {
    int a, b;
    cin >> a >> b;
    total += (ll)b;
    ab[i].first = a;
    ab[i].second = b;
  }

  if (total <= K)
  {
    cout << 1 << endl;
    return 0;
  }

  sort(ab.begin(), ab.end());
  ull temp = 0;
  rep(i, 0, N)
  {
    int date = ab[i].first;
    temp += ab[i].second;
    if (total - temp <= K)
    {
      cout << date + 1 << endl;
      return 0;
    }
  }
}