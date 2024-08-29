#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;

  cin >> N >> M;
  vector<vector<int>> AB(M, vector<int>(2, 0));
  vector<vector<char>> result(N, vector<char>(N, '-'));

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < 2; j++)
    {

      cin >> AB[i][j];
    }
  }

  for (int m = 0; m < M; m++)
  {
    result[AB[m][0] - 1][AB[m][1] - 1] = 'o';
    result[AB[m][1] - 1][AB[m][0] - 1] = 'x';
  }

  for (int a = 0; a < N; a++)
  {
    for (int g = 0; g < N; g++)
    {
      cout << result[a][g] << " ";
    }
    cout << endl;
  }
  
}