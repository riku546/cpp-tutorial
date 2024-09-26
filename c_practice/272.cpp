#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> odds = {};
  vector<int> evens = {};

  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    if (temp % 2 == 0)
      evens.push_back(temp);
    else
      odds.push_back(temp);
  }

  int even_total = -1000;
  int odd_total = -1000;

  if (odds.size() <= 1 && evens.size() <= 1)
  {
    cout << -1 << endl;
    return 0;
  }
  else if (odds.size() <= 1)
  {
    sort(evens.begin(), evens.end());
    even_total = evens.back() + evens[evens.size() - 2];
  }
  else if (evens.size() <= 1)
  {

    sort(odds.begin(), odds.end());
    odd_total = odds.back() + odds[odds.size() - 2];
  }
  else
  {
    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());
    even_total = evens.back() + evens[evens.size() - 2];
    odd_total = odds.back() + odds[odds.size() - 2];
  }

  int ans = max(odd_total, even_total);
  cout << ans << endl;
}