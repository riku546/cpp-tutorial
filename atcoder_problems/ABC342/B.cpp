#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{

  string S;
  cin >> S;
  set<char> temp_s;
  rep(i, S.size())
  {
    temp_s.insert(S[i]);
  }
  cout << temp_s
  int s0 = 0;
  int s1 = 0;
  char ans_s;
  rep(j, S.size())
  {
    if (S[0] == S[j])
    {
      s0 += 1;
    }
    else if (S[1] == S[j])
    {
      s1 += 1;
    }
  }

  if (s0 == 1)
  {
    ans_s = te;
  }
  else if (s1 == 1)
  {
    ans_s = S[1];
  }
  // cout << S[0] << S[1];
  rep(j, S.size())
  {

    if (ans_s == S[j])
      cout << j + 1 << endl;
  }
}