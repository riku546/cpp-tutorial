#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  char p, q;
  cin >> p >> q;
  vector<char> s = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
  vector<int> distance = {3, 1, 4, 1, 5, 9};
  char first  , last;
  if(p < q) {
    first = p;
    last = q;
  }else {
    first = q;
    last = p;
  }
  int ans = 0;
  rep(i, 0, s.size())
  {
    if (s[i] == first)
      rep(j, i + 1, s.size())
      {
        ans += distance[j - 1];
        if (s[j] == last)
          break;
      }
  }

  cout << ans << endl;
}