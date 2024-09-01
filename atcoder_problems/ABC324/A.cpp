#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<int> ans;
  rep(i, N)
  {
    int temp;
    cin >> temp;
    ans.insert(temp);
  }

  if (ans.size() == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}