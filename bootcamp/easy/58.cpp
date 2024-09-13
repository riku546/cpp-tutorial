#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, T, A;
  cin >> N;
  cin >> T >> A;
  double ans = 1e9;
  int index;
  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    double avg_temp = T - temp * 0.006;
    if (abs(A - avg_temp) <= ans)
    {
      index = i + 1;
      ans = abs(A - avg_temp);
    }
  }

  cout << index << endl;
}