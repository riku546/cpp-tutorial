#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int A, B, D;
  cin >> A >> B >> D;
  int ans = A;
  cout << A << " ";
  rep(i, (B - A) / D) {
    ans += D;
    cout << ans  << " ";
    }
  cout << endl;
}