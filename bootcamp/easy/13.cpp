#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  if (A % 2 == 0 && A == B && B == C)
  {
    cout << -1 << endl;
    return 0;
  }

  ll a = A, b = B, c = C;
  int ans = 0;
  while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
  {
    ll temp_a = a / 2;
    ll temp_b = b / 2;
    ll temp_c = c / 2;

    a = temp_b + temp_c;
    b = temp_a + temp_c;
    c = temp_a + temp_b;
    ans++;
  }

  cout << ans << endl;
}