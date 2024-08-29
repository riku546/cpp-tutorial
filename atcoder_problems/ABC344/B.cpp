#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  vector<int> A;
  while (true)
  {
    int a;
    cin >> a;
    A.push_back(a);
    if (a == 0)
      break;
  }

  reverse(A.begin(), A.end());
  rep(i, A.size()) cout << A[i] << endl;
}