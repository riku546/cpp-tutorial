#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, A, B;
  string S;
  cin >> N >> A >> B;
  cin >> S;
  int total_rest = A + B;
  int b_rest = B;
  rep(i, 0, N)
  {
    if (S[i] == 'c')
    {
      cout << "No" << endl;
    }
    else if (S[i] == 'a')
    {
      if (total_rest > 0)
      {
        total_rest--;
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else if (S[i] == 'b')
    {
      if (total_rest > 0 && b_rest > 0)
      {
        total_rest--;
        b_rest--;
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }
}