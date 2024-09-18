#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  rep(i, 0, M) cin >> A[i];

  int index = 0;
  int temp = A[index];
  rep(i, 1, N + 1)
  {
    cout << temp - i << endl;

    if (temp == i)
    {
      index++;
      temp = A[index];
    }
  }
}