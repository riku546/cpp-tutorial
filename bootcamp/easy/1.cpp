#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int temp = 1;
  int cnt = 0;
  while (temp < B)
  {
    temp += A - 1;
    cnt++;
  }
  cout << cnt << endl;
}