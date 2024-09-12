#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> memory(N);
  
  rep(i, 0, M)
  {
    int a, b;
    cin >> a >> b;
    memory[a - 1]++;
    memory[b - 1]++;
  }

  rep(i, 0, N) cout << memory[i] << endl;
}