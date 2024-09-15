#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i, 0, N) cin >> S[i];
  int ans = 10;

  rep(i, 0, 1 << N)
  {
    vector<int> temp = {};
    vector<char> memory(M, 'x');
    rep(j, 0, N)
    {
      if (i & (1 << j))
      {
        temp.push_back(j);
      }
    }

    rep(k, 0, temp.size())
    {
      rep(m, 0, M)
      {
        if (S[temp[k]][m] == 'o')
        {
          memory[m] = 'o';
        }
      }
    }

    if (count(memory.begin(), memory.end(), 'x'))
      continue;

    ans = min(ans, (int)temp.size());
  }

  cout << ans << endl;
}