#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<pair<int, int>> cA(M);
  rep(i, 0, M)
  {
    int temp;
    cin >> temp;
    A[i] = temp;
    cA[i].first = temp;
    cA[i].second = i;
  };

  sort(cA.begin(), cA.end());
  reverse(cA.begin(), cA.end());
  vector<int> player_point = {};
  vector<string> S(N);
  int top = 0;
  rep(i, 0, N)
  {
    string temp;
    cin >> temp;
    S[i] = temp;
    int point = 0;

    rep(j, 0, M)
    {
      if (temp[j] == 'o')
        point += A[j];
    }
    if (point != 0)
      point += i + 1;
    player_point.push_back(point);
    top = max(top, point);
  }

  rep(i, 0, N)
  {
    if (player_point[i] < top)
    {
      int cnt = 0;
      rep(j, 0, M)
      {
        if (S[i][cA[j].second] != 'o')
        {
          if (player_point[i] == 0)
            player_point[i] += i + 1;
          player_point[i] += cA[j].first;
          cnt++;
        }
        if (player_point[i] >= top)
        {
          cout << cnt << endl;
          break;
        }
      }
    }
    else
    {
      cout << 0 << endl;
    }
  }
}