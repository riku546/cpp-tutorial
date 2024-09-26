#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  set<string> memory;
  int x = 0, y = 0;
  memory.insert(to_string(x) + to_string(y));

  rep(i, 0, N)
  {
    if (S[i] == 'R')
    {
      x++;
    }
    else if (S[i] == 'L')
    {
      x--;
    }
    else if (S[i] == 'U')
    {
      y++;
    }
    else if (S[i] == 'D')
    {
      y--;
    }

    string temp = to_string(x) + to_string(y);
    if (memory.count(temp))
    {
      cout << "Yes" << endl;
      return 0;
    }
    else
    {
      memory.insert(to_string(x) + to_string(y));
    }
  }

  cout << "No" << endl;
}