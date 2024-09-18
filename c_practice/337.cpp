#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> memory;
  rep(i, 1, N + 1)
  {
    int index;
    cin >> index;
    memory[index] = i;
  }

  int j = -1;
  rep(i, 0, N)
  {
    cout << memory[j] << ' ';
    j = memory[j];
  }
  cout << endl;
}