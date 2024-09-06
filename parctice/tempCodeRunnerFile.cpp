#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;
  int cnt = 0;
  rep(i, 1, 100000)
  {
    if (A % i == 0 && B % i == 0)
      
      cnt++;
    if (cnt == K)
    {
      cout << i << endl;
      return 0;
    }
  }
}