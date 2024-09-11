#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  int K;
  cin >> N >> K;
  vector<int> A(N);
  set<ll> memory;

  //(ll)でキャストすることで、計算しているときの型をllに変換できる
  // これによりオーバーフローを防げる。
  ll total1 = (ll)K * (K + 1) / 2;

  ll total2 = 0;
  rep(i, 0, N)
  {
    ll temp;
    cin >> temp;
    if (temp > K)
      continue;

    memory.insert(temp);
  }

  for (auto num : memory)
  {
    total2 += num;
  }

  cout << total1 - total2 << endl;
}