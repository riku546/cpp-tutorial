#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<int> temp = {};

  rep(i, S.size())
  {
    if (S[i] == '|')
    {
      temp.push_back(i);
    };
  };


  string s1 = S.substr(0, temp[0]);
  string s2 = S.substr(temp[1] + 1, S.size());
  cout << s1 + s2 << endl;
}