#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;
  if (B - A + 1 <= K)
  {
    rep(i, A, B + 1)
    {
      cout << i << endl;
    }
    return 0;
  }

  set<int> memory;
  rep(i, 0, K) memory.insert(A + i);
  rep(i, B - K + 1, B + 1) memory.insert(i);

  for (auto num : memory)
  {
    cout << num << endl;
  }
}