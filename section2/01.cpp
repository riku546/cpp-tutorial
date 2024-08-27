#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> A(5, 0);

  for (int i = 0; i < 5; i++)
  {
    cin >> A[i];
  }
  

  for (int j = 1; j < 4; j++)
  {
    if (A[j] == A[j - 1] || A[j] == A[j + 1])
    {
      cout
          << "YES" << endl;
      return 0;
    }
  }

  cout
      << "NO" << endl;
}