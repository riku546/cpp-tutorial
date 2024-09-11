#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  map<char, int> memory;
  rep(i, 0, S.size()) memory[S[i]]++;
  if (memory.size() == 26)
  {
    cout << "None" << endl;
    return 0;
  }

  rep(i, 'a', 'z' + 1)
  {
    char t = (char)i;
    if (memory[t] == 0)
    {
      cout << t << endl;
      return 0;
    }
  }
}