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
  vector<pair<int, int>> result = {};
  rep(i, 0, N * 3)
  {
    int num;
    cin >> num;
    memory[num]++;
    if (memory[num] == 2)
      result.push_back(make_pair(i + 1, num));
  }
  sort(result.begin(), result.end());

  for (pair<int, int> value : result)
  {
    cout << value.second << ' ';
  }
  cout << endl;
}