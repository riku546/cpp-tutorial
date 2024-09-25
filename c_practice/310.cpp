#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, vector<string>> memory;
  set<string> S;
  vector<string>s_array = {"aa"};
  
  int cnt = 0;

  rep(i, 0, N)
  {
    string temp, ctemp;
    cin >> temp;
    ctemp = temp;
    if (S.size() == 0)
      S.insert(temp);

    reverse(ctemp.begin(), ctemp.end());
    if (S.count(ctemp))
      continue;
    S.insert(temp);
  }

  cout << S.size() << endl;
}
