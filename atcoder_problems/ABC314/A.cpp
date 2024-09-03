#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<string> strs = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  if (count(strs.begin(), strs.end(), S))
    cout << "Yes" << endl;
  else
   cout << "No" << endl;
}