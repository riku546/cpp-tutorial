#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> temp = {};
  rep(i, 0, N)
  {
    int a;
    cin >> a;
    temp.push_back(a);
    while (temp.size() > 1)
    {
      int last = temp[temp.size() - 1];
      if (last != temp[temp.size() - 2])
        break;
      temp.pop_back();
      temp.pop_back();
      temp.push_back(last + 1);
    }
  }
  cout << temp.size() << endl;
}