#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int L0 = 2, L1 = 1;

  vector<int64_t> temp = {2, 1};
  cin >> N;

  for (int i = 0; i < N - 1; i++)
  {
    int64_t ans = 0;
    ans = temp[i] + temp[i + 1];
    temp.push_back(ans);
  }
  cout << temp[N] << endl;
}