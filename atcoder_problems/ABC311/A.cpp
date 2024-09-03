#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  int cnt_a = 0, cnt_b = 0, cnt_c = 0;
  rep(i, 0, N)
  {
    if (cnt_a >= 1 && cnt_b >= 1 && cnt_c >= 1)
    {
      cout << i  << endl;
      return 0;
    }
    else if (S[i] == 'A')
      cnt_a++;
    else if (S[i] == 'B')
    
      cnt_b++;
    else if (S[i] == 'C')
      cnt_c++;
  }
}