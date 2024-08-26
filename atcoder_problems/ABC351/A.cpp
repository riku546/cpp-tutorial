#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> A(9, 0);
  vector<int> B(8, 0);
  int A_sum = 0;
  int B_sum = 0;

  for (int i = 0; i < A.size(); i++)
  {
    cin >> A[i];
  }

  for (int j = 0; j < B.size(); j++)
  {
    cin >> B[j];
  }

  A_sum = reduce(A.begin(), A.end());
  B_sum = reduce(B.begin(), B.end());

  cout << (A_sum - B_sum) + 1 << endl;

  return 0;
}