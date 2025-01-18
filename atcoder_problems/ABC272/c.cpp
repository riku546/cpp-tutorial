#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> temp1;
  vector<int> temp2;
  rep(i, 0, n)
  {
    int num;
    cin >> num;
    if (num % 2 == 0)
      temp1.push_back(num);
    else
      temp2.push_back(num);
  }

  if (temp1.size() < 2 && temp2.size() < 2)
  {
    cout << -1 << endl;
  }
  else if (temp1.size() < 2 && temp2.size() >= 2)
  {
    sort(temp2.begin(), temp2.end());
    cout << temp2.back() + temp2[temp2.size() - 2] << endl;
  }
  else if (temp1.size() >= 2 && temp2.size() < 2)
  {
    sort(temp1.begin(), temp1.end());
    cout << temp1.back() + temp1[temp1.size() - 2] << endl;
  }
  else
  {
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    cout << max(temp1.back() + temp1[temp1.size() - 2], temp2.back() + temp2[temp2.size() - 2]) << endl;
  }
}