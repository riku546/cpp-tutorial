#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;

  cin >> S;
  string part_S = S.substr(3, 6);
  cout << endl;

  if (part_S == "316")
  {
    cout << "No" << endl;
    return 0;
  }
  else if (stoi(part_S) < 1 || stoi(part_S) > 349)
  {
    cout << "No" << endl;
    return 0;
  }
  else
  {
    cout << "Yes" << endl;
    return 0;
  }
}