#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  set<char> first = {'H', 'D', 'C', 'S'};
  set<char> second = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  map<string, int> temp;

  rep(i, 0, n)
  {
    string s;
    cin >> s;
    if (!first.count(s[0]))
    {
      cout << "No" << endl;
      return 0;
    }
    if (!second.count(s[1]))
    {
      cout << "No" << endl;
      return 0;
    }
    if(temp[s]) {
      cout << "No" << endl;
      return 0;

    }
    temp[s]++;
  }

  cout << "Yes" << endl;
}