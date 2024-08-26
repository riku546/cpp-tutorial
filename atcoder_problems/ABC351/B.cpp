#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N = 0;
  int result_y, result_x = 0;
  cin >> N;

  vector<vector<char>> A(N, vector<char>(N));
  vector<vector<char>> B(N, vector<char>(N));

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> B[i][j];
      if (B[i][j] != A[i][j])
      {
        result_y = i + 1;
        result_x = j + 1;
      }
    }
  }

  cout << endl;
  cout << result_y << " " << result_x << endl;
  return 0;
}