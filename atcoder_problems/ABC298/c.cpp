#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  map<int, vector<int>> box;
  map<int, vector<int>> card;
  int n, q;
  cin >> n >> q;

  rep(x, 0, q)
  {
    int qtype;
    cin >> qtype;

    if (qtype == 1)
    {
      int i, j;
      cin >> i >> j;
      box[j].push_back(i);
      card[i].push_back(j);
    }
    else if (qtype == 2)
    {
      int i;
      cin >> i;
      sort(box[i].begin(), box[i].end());
      rep(j, 0, box[i].size()) cout << box[i][j] << ' ';
      cout << '\n';
    }
    else
    {
      int i;
      cin >> i;
      sort(card[i].begin(), card[i].end());
      int temp = card[i].front();
      card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
      rep(j, 0, card[i].size())
      {
        cout << card[i][j] << '\n';
      }
      cout << '\n';
    }
  }
}