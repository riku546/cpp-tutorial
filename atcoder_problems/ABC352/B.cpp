#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S, T = "";
  cin >> S;
  cin >> T;
  int j = 0;

  for (int i = 0; i < T.size(); i++)
  {
    if (S[j] == T[i])
    {
      cout << i + 1 << " ";
      j++;
    }
  }
  cout << endl;
  return 0;
}