#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  int temp = 0;
  int size = S.size();
  rep(i, 0, size - 1)
  {
    if (S[i] == '0' && S[i + 1] == '0')
    {
      i++;
      temp++;
    }
  }

  cout << size - temp << endl;
}