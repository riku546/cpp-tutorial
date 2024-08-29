#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  string S;

  cin >> S;
  if (S[0] != '<')
  {
    cout << "No" << endl;
    return 0;
  }

  if (S[S.size() - 1] != '>')
  {
    cout << "No" << endl;
    return 0;
  }

  for (size_t i = 1; i < S.size() - 1; i++)
  {
    if (S[i] != '=')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
