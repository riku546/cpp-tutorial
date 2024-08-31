#include <bits/stdc++.h>
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  rep(i, 1, N + 1)
  {
    int sum = 0;
    int n = i;
    while (n > 0)
    {
      sum += n % 10;
      n /= 10;
        }

    if (sum >= A && sum <= B)
      ans += i;
  }

  cout << ans << endl;
}