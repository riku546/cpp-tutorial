#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "wbwbwwbwbwbw";

  int w, b;
  cin >> w >> b;

  for (size_t i = 0; i < s.size(); i++)
  {
    int cnt_w = 0, cnt_b = 0;

    for (size_t j = 0; j < w + b; j++)
    {
      if (s[(i + j) % s.size()] == 'w')

        cnt_w++;
      else
        cnt_b++;
    }
    if (cnt_w == w and cnt_b == b)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}