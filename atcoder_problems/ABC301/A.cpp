#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  int t_cnt = 0, a_cnt = 0;
  rep(i, 0, N)
  {
    if (S[i] == 'T')
      t_cnt++;
    else
      a_cnt++;
  }

  if (t_cnt == a_cnt)
  {
    if (S[N - 1] == 'T')
    {
      cout << 'A' << endl;
      return 0;
    }
    else
    {
      cout << 'T' << endl;
      return 0;
    }
  }
  else if (t_cnt > a_cnt)
  {
    cout << 'T' << endl;
  }
  else
    cout << 'A' << endl;
}