#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, M;
  string S, T;
  cin >> N >> M;
  cin >> S;
  cin >> T;

  string head = T.substr(0, N);
  string last = T.substr(M - N, N);

  if (S == head && S == last)
  {
    cout << 0 << endl;
    return 0;
  }
  else if (S == head && S != last)
  {
    cout << 1 << endl;
    return 0;
  }
  else if (S != head && S == last)
  {
    cout << 2 << endl;
    return 0;
  }
  else
  {
    cout << 3 << endl;
    return 0;
  }
}
