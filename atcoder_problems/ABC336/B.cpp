#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long n;

  bitset<60> bs(N);
  string bs_s = bs.to_string();
  // cout << bs.size();
  int ans = 0;
  
  if (bs_s[bs_s.size() - 1] == '1')
  {
    
    cout << 0 << endl;
    return 0;
  }
  else
  {
    for (int i = bs_s.size() - 1; i >= 0; i--)
    {
      if (bs_s[i] == '1')
        break;
      ans++;
    }
    cout << ans << endl;
  }
}