#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> AB(N);
  int max_head = 0;

  rep(i, 0, N)
  {
    int shoulder, head;
    cin >> shoulder >> head;
    AB[i].first = shoulder;
    AB[i].second = head;
    max_head = max(max_head, head - shoulder);
  }

  ll ans = max_head;
  rep(i, 0, N) ans += AB[i].first;
  cout << ans << endl;
}