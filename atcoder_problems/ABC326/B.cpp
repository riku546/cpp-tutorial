#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;

  rep(i, N, 920)
  {
    int num1 = i % 10;
    int num2 = (i /10) % 10;
    int num3 = ((i /10) /10) % 10;
    
    
    if (num2 * num3 == num1)
    {
      cout << i << endl;
      return 0;
    }
  }
}