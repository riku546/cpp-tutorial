#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  queue<int> a = {};
  rep(i, 0, n)
  {
    int num;
    cin >> num;
    a.push(num);
  }

  rep(i, 0, k)
  {
    a.pop();
    a.push(0);
  }

  int size = a.size();
  rep(i, 0, size)
  {
    int ans = a.front();
    a.pop();
    cout << ans << ' ';
  }
  cout << endl;
}