#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  vector<int> A = {1, 2, 3, 4, 5};
  if (count(A.begin(), A.end(), 1))
    cout << 1 << endl;
  if (count(A.begin(), A.end(), 10))
    cout << 10 << endl;
}