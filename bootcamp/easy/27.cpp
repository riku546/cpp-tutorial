#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  ll N, A, B;
  cin >> N >> A >> B;

  ll ans = 0;
  ll temp1 = N / (A + B);
  ll temp2 = N % (A + B);

  ans += A * temp1;
  if (temp2 >= A)
    ans += A;
  else
    ans += temp2;

  cout << ans << endl;
}