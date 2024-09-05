#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  string T;
  cin >> S;
  cin >> T;

  rep(i, 0, N)
  {

    bool flag = false;
    if (S[i] == T[i])
      flag = true;
    else if ((S[i] == '0' && T[i] == 'o') || (S[i] == 'o' && T[i] == '0'))
    {
      flag = true;
    }
    else if ((S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1'))
      flag = true;

    if (!flag)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}