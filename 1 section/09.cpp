#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力

  x++;

  int temp = x * (a + b);
  int temp1 = temp * (x * (a + b));

  cout << x << endl;
  cout << temp << endl;
  cout << temp1 << endl;
  cout << temp1 - 1 << endl;
}