#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int h;

  cin >> h;
  cin >> N;

  vector<vector<int>> A(h, vector<int>(N));

  for (int j = 0; j < h; j++)
    for (int i = 0; i < N; i++)
      cin >> A[j][i];

  string B;
  cout << "ff";

  // cout << A[0][0] << endl;
  // cout << A[0][1] << endl;
  // cout << A[1][0] << endl;
  // cout << A[1][1] << endl;
}