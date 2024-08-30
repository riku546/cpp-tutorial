#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  string S, T;
  cin >> N;
  cin >> S >> T;

  rep(i, N) cout << S[i] << T[i];
  cout << endl;
}