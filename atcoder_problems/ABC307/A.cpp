#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A = {};
  vector<long long> result(N);

  rep(i, 0, N) rep(j, 0, 7)
  {
    int temp;
    cin >> temp;
    result[i] += temp;
  }

  rep(i, 0, N) cout << result[i] << ' ';
  cout << endl;
}