#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> W(N);
  rep(i, 0, N) cin >> W[i];

  vector<string> memory = {};
  memory.push_back(W[0]);
  rep(i, 1, N)
  {
    string temp_s = W[i - 1];
    if (count(memory.begin(), memory.end(), W[i]) || temp_s[temp_s.size() - 1] != W[i][0])
    {
      cout << "No" << endl;
      return 0;
    }
    memory.push_back(W[i]);
  }

  cout << "Yes" << endl;
}