#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> R(N);
  rep(i, 0, N) cin >> R[i];
  vector<vector<int>> permutation_result = {};
  vector<int> nums = {};
  rep(i, 1, N + 1) nums.push_back(i);

  do
  {
    vector<int> temp = {};
    rep(i, 0, N ) temp.push_back(nums[i]);
    permutation_result.push_back(temp);
  } while (next_permutation(nums.begin(), nums.end()));

  rep(i, 0, permutation_result.size())
  {
    rep(j, 0, N) cout << permutation_result[i][j] << ' ';
    cout << endl;
  }
}