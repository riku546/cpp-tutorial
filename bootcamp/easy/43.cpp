#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string w;
  cin >> w;
  map<char, int> memory;
  rep(i, 0, w.size()) memory[w[i]]++;

  for (auto [key, value] : memory)
  {
    if (value % 2 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}