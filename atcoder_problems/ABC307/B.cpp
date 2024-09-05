#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, 0, N) cin >> S[i];

  rep(i, 0, N) rep(j, 0, N)
  {
    if (i == j)
      continue;
    string temp = S[i] + S[j];
    string rev_temp = temp;
    reverse(rev_temp.begin(), rev_temp.end());
    if (temp == rev_temp)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}