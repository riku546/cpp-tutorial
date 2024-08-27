#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M, L, Q;
  set<int> temp = {};
  cin >> N;

  vector<int> A(N);
  for (size_t i = 0; i < A.size(); i++)
  {
    cin >> A[i];
  }

  cin >> M;
  vector<int> B(M);
  for (size_t i = 0; i < B.size(); i++)
  {
    cin >> B[i];
  }
  cin >> L;
  vector<int> C(L);
  for (size_t i = 0; i < C.size(); i++)
  {
    cin >> C[i];
  }

  cin >> Q;
  vector<int> X(Q);
  for (size_t i = 0; i < X.size(); i++)
  {
    cin >> X[i];
  }

  for (size_t i = 0; i < A.size(); i++)
  {
    for (size_t j = 0; j < B.size(); j++)
    {
      for (size_t k = 0; k < C.size(); k++)
      {
        temp.insert(A[i] + B[j] + C[k]);
      }
    }
  }

  for (size_t i = 0; i < X.size(); i++)
  {
    if (temp.find(X[i]) != temp.end())
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  return 0;
}