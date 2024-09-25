#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;
  map<int, pair<int, int>> memory;
  vector<bool> ans(N, false);
  vector<pair<int, int>> distances = {};
  map<int, pair<int, int>> virus;

  int first_x, first_y;
  cin >> first_x >> first_y;
  memory[1].first = first_x;
  memory[1].second = first_y;
  virus[1].first = first_x;
  virus[1].second = first_y;
  ans[0] = true;

  rep(i, 0, N - 1)
  {
    int temp_x, temp_y;
    cin >> temp_x >> temp_y;
    memory[i + 2].first = temp_x;
    memory[i + 2].second = temp_y;

    int distance = pow(pow(memory[1].first - temp_x, 2) + pow(memory[1].second - temp_y, 2), 0.5);
    distances.push_back(make_pair(distance, i + 2));
  }

  sort(distances.begin(), distances.end());

  rep(i, 0, distances.size())
  {
    for (auto var : virus)
    {
      int distance = pow(pow(var.second.first - memory[distances[i].second].first, 2) + pow(var.second.second - memory[distances[i].second].second, 2), 0.5);
      if (distance <= D)
      {
        virus[distances[i].second].first = memory[distances[i].second].first;
        virus[distances[i].second].second = memory[distances[i].second].second;
        ans[distances[i].second - 1] = true;
      }
    }
  }

  rep(i, 0, ans.size())
  {
    if (ans[i])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}