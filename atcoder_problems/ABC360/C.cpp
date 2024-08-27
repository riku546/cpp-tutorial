#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N, 0);
  vector<int> W(N, 0);
  vector<vector<int>> temp(N, vector<int>());

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int j = 0; j < N; j++)
  {
    cin >> W[j];
  }

  for (int i = 0; i < N; i++)
  {
    temp[A[i] - 1].push_back(W[i]);
  }

  int ans = 0;

  for (int i = 0; i < temp.size(); i++)
  {
    if (temp[i].size() == 0)
      continue;

    sort(temp[i].begin(), temp[i].end());

    for (int j = 0; j < temp[i].size() - 1; j++)
    {
      ans += temp[i][j];
    }
  }

  cout << ans << endl;
}