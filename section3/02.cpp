#include <bits/stdc++.h>
using namespace std;

int main()
{
  // pair<int, string> ab(1, "st");
  // cout << ab.first << endl;
  // cout << ab.second << endl;

  // pair a = make_pair(1, "st");
  // cout << a.first << endl;
  // cout << a.second << endl;

  // tuple<int, string, double> abc(12, "ttt", 0.1);
  // cout << get<0>(abc) << endl;

  // auto e = "tt";
  // cout << e << endl;
  // vector<int> k = {
  //     1,
  //     2,
  //     3,
  // };
  // for (auto num : k)
  // {
  //   cout << num << endl;
  // }

  int N;
  cin >> N;
  vector<pair<int, int>> abs = {};
  for (int i = 0; i < N; i++)
  {
    pair<int, int> ab;
    cin >> ab.second >> ab.first;
    abs.push_back(ab);
  }

  sort(abs.begin(), abs.end());

  for (int i = 0; i < N; i++)
  {
    int a, b;
    tie(b, a) = abs[i];
    cout << a << " " << b << endl;
  }
}