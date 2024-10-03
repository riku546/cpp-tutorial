#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >>M;
  vector<string> S(N);
  map<string, int> T;
  rep(i, 0, N) cin >> S[i];
  rep(i, 0, M)
  {
    string s;
    cin >> s;
    T[s] = 1;
  }
  rep(i, 0, N)
  {
    if (T[S[i]] == 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}