#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, M, P;
  cin >> N >> M >> P;

  long long temp = M;
  int cnt = 0;
  while (temp <= N)
  {
    cnt++;
    temp += P;
  }

  cout << cnt << endl;
}