#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  string S;

  cin >> N;
  cin >> S;

  rep(i, S.size())
  {
    char s = S[i] + N;
    if (S[i] + N > 90)
    {
      char p = s - 26;
      cout << p;
    }
    else
    {
      cout << s;
    }
  }
  cout << endl;
}