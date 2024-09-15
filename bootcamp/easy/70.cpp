#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int X;
  cin >> X;

  if (X < 100)
  {
    cout << 0 << endl;
    return 0;
  }
  else if (X % 100 == 0)
  {
    cout << 1 << endl;
    return 0;
  }

  string xs = to_string(X);
  string temp_s1 = xs.substr(xs.size() - 2, 2);
  string temp_s2 = xs.substr(0, xs.size() - 2);
  int cnt = 0;
  int int_temp_s = stoi(temp_s1);
  for (int i = 5; i > 0; i--)
  {
    while (int_temp_s - i >= 0)
    {
      int_temp_s -= i;
      cnt++;
    }
  }

  if (cnt * 100 <= stoi(temp_s2) * 100)
  {
    cout << 1 << endl;
    return 0;
  }else{
    cout << 0 << endl;
  }
}