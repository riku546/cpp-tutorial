#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll N;
  cin >> N;
  string ns = to_string(N);
  string temp = "";
  int ans = 0;
  if (ns.size() == 1)
  {
    cout << N << endl;
    return 0;
  }



  if (ns[0] == '1')
  {
    rep(i, 0, ns.size() - 1) temp += '9';
  }
  else
  {
    int num = ns[0] - '0';
    temp += to_string(num - 1);
    rep(i, 0, ns.size() - 1) temp += '9';
  }

  rep(i, 0, temp.size())
  {
    int num = temp[i] - '0';
    ans += num;
  }

  cout << ans << endl;
}