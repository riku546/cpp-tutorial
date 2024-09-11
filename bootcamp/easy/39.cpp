#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A = {};
  vector<int> cA = {};
  rep(i, 0, N)
  {
    int temp;
    cin >> temp;
    A.push_back(temp);
    cA.push_back(temp);
  }
  int max_value;
  int cnt_max_value = 0;
  int second_value;

  sort(cA.begin(), cA.end());
  max_value = cA[N - 1];
  if (cA[N - 2] == max_value)
    cnt_max_value += 2;
  else
  {
    second_value = cA[N - 2];
  }

  if (cnt_max_value == 2)
    rep(i, 0, N) cout << max_value << endl;
  else
  {
    rep(i, 0, N)
    {
      if (A[i] == max_value)
        cout << second_value << endl;
      else
        cout << max_value << endl;
    }
  }
}