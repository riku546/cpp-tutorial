#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<int> temp = {0};
  int max_length = 0;
  int count = 0;
  for (size_t i = 0; i < S.size(); i++)
  {

    if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T')
    {
      count++;
      max_length = max(max_length, count);
    }
    else
    {
      count = 0;
    }
  }

  cout << max_length << endl;
}