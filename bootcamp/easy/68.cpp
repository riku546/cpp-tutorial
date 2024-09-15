#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, vector<pair<int, int>>> memory;
  rep(i, 0, N)
  {
    string city;
    int point;
    cin >> city >> point;

    memory[city].push_back(make_pair(point, i + 1));
    sort(memory[city].begin(), memory[city].end());
  }

  for (pair<string, vector<pair<int, int>>> record : memory)
  {
    for (int i = record.second.size() - 1; i >= 0; i--)
    {

      cout << record.second[i].second << endl;
      
    }
  }
}