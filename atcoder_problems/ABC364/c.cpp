#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  ll X, Y;
  cin >> N >> X >> Y;
  vector<int> A(N);
  vector<int> B(N);
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, N) cin >> B[i];

  sort(A.begin(), A.end());
  int i = N - 1;
  int ans_x = 0;
  ll rest_x = 0;
  while (rest_x <= X && i >= 0)
  {
    ans_x++;
    rest_x += A[i];
    i--;
  }

  sort(B.begin(), B.end());

  int j = N - 1;
  int ans_y = 0;
  
  ll rest_y = 0;
  while (rest_y <= Y && j >= 0)
  {
    ans_y++;
    rest_y += B[j];
    j--;
  }

  cout << min(ans_x, ans_y) << endl;
}