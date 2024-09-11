#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<char> memory = {};
  for (char s : S)
  {
    if (count(memory.begin(), memory.end(), s))
    {
      cout << "no" << endl;
      return 0;
    }
    memory.push_back(s);
  }

  cout << "yes" << endl;
}