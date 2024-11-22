#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  

  cin >> N;
  vector<int> ans = {};

  for (int i = 1; i < (int)sqrt(N) + 1; i++)
  {
    int temp;

    if (N % i == 0)
    {
      cout << i << endl;
      temp = max(to_string(i).size(), to_string(N / i).size());
      ans.push_back(temp);
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans[0] << endl;
}