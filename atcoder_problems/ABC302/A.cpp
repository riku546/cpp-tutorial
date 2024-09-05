#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  long long A, B;


  cin >> A >> B;
  long long t = A / B;
  long long s = A % B;
  long long cnt = 0;

  while (s > 0)
  {
    
    s -= B;
    cnt++;
  }

  cout << cnt + t << endl;
}