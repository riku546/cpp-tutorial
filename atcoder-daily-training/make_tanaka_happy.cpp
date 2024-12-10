#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int h, w;
int ans = 0;

void recursion(int x, int y, map<int, int> temp , vector<vector<int>>grid)
{
  if (x < 0 || x > w - 1)
    return;
  if (y < 0 || y > h - 1)
    return;

  temp[grid[y][x]]++;
  if (temp[grid[y][x]] >= 2)
    return;

  if (x == w - 1 && y == h - 1)
    ans++;


  recursion(x + 1, y, temp , grid);
  recursion(x, y + 1, temp , grid);
}

int main()
{
  cin >> h >> w;
  vector<vector<int>> grid(h, vector<int>(w));
  rep(i, 0, h) rep(j, 0, w) cin >> grid[i][j];
  map<int, int> temp;
  recursion(0, 0, temp , grid);
  cout << ans << endl;
}