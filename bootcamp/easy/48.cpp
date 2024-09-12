#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  vector<int> memory(N);
  rep(i, 0, N) cin >> H[i];
  int ans = 0;
  rep(i, 0, N - 1)
  {
    int temp = 0;

    if (H[i] < H[i + 1] || memory[i] > 0)
      continue;
    temp++;
    rep(j, i + 1, N - 1)
    {
      if (H[j] < H[j + 1])
        break;
      temp++;
      memory[j] = H[j];
    }
    ans = max(ans, temp);
  }

  cout << ans << endl;
}