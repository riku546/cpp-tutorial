#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

bool isValid(ll mid, vector<int> A)
{
  ll temp = mid;
  rep(i, 0, A.size())
  {
    temp += (ll)A[i];
    if (temp < 0)
      return false;
  }

  return true;
}

ll binary_seach(vector<int> A, int N)
{
  ll left = -1;
  ll right = 1e18;

  while (right - left > 1)
  {
    ll mid = (ll)(right + left) / 2;

    if (isValid(mid, A))
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
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  ll total = reduce(A.begin(), A.end(), 0LL);
  cout << binary_seach(A, N) + total << endl;
}
