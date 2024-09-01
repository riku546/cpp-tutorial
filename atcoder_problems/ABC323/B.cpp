#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, vector<int>> S;
  rep(i, 0, N)
  {
    int cnt = 0;
    char c;
    rep(j, 0, N)
    {
      cin >> c;
      if (c == 'o')
        cnt++;
    }
    S[cnt].push_back(i + 1);
  }

  for (int i = N - 1; i > -1; i--)
  {
    if (S[i].size() > 1)
      sort(S[i].begin(), S[i].end());
    rep(j, 0, S[i].size()) cout << S[i][j] << ' ';
  }
  cout << endl;
}