#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> A(N, 0);
  vector<int> B(N, 0);
  vector<int> C = {};

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    C.push_back(A[i]);
  }

  for (int i = 0; i < M; i++)
  {
    cin >> B[i];
    C.push_back(B[i]);
  }

  sort(C.begin(), C.end());

  for (size_t i = 0; i < C.size() - 1; i++)
  {
    if (find(A.begin(), A.end(), C[i]) != A.end() && find(A.begin(), A.end(), C[i + 1]) != A.end())
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}