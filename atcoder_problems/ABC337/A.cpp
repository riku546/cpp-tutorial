#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> x(N);
  vector<int> y(N);
  rep(i, N) cin >> x[i] >> y[i];

  int x_total = 0;
  rep(i, N) x_total += x[i];

  int y_total = 0;
  rep(i, N) y_total += y[i];

  if (x_total > y_total)
  {
    cout << "Takahashi" << endl;
  }
  else if (x_total < y_total)
  {
    cout << "Aoki" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }
}