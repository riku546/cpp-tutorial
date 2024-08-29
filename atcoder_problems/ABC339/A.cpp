#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<string> temp = {};
  rep(i, S.size())
  {
     if (S[i] == '.')
    {
      for (size_t j = i; j < S.size(); j++)
      {
        if (S[j] == '.' || j == S.size() - 1)
        {
          temp.push_back(S.substr(i + 1, j + 1));
        }
      }
    }
  }
  cout << temp[temp.size() - 1] << endl;
}