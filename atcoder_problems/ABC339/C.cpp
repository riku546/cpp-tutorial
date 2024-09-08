#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

bool isValid(vector<ll> A, ll mid)
{
  ll total = mid;
  rep(i, 0, A.size())
  {
    total += A[i];
    if (total < 0)
      return false;
  }
  return true;
}

ll binary_search(vector<ll> A, int N)
{
  ll left = -1;
  ull right = 1e18;

  while (right - left > 1)
  {
    ll mid = left + (right - left) / 2;

    if (isValid(A, mid))
      right = mid;
    else
      left = mid;
  }

  return right;
}

int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, 0, N) cin >> A[i];
  ll total = reduce(A.begin(), A.end());
  cout << binary_search(A, N) + total << endl;
}