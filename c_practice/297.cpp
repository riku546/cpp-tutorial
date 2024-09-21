#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S = "wbwbwwbwbwbw";
  int W, B;
  cin >> W >> B;
  rep(i, 0, S.size())
  {
    int w_cnt = 0, b_cnt = 0;


    rep(j, i, i + W + B)
    {
      if (S[j % 12] == 'w')
        w_cnt++;
      else 
        b_cnt++;
    }
    if (w_cnt == W && b_cnt == B)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}