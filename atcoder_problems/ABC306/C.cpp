#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> temp(N);
  vector<int> result = {};
  rep(i, 0, 3 * N)
  {
    int a;
    cin >> a;
    temp[a - 1] += 1;
    if (temp[a - 1] == 2){
      result.push_back(a);
    
    }
  }

  rep(i, 0, result.size()) cout << result[i] << ' ';
  cout << endl;
}