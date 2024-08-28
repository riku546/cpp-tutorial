#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> result = {};
  for (size_t i = 1; i <= min(A, B); i++)
  {
    if (A % i == 0 && B % i == 0)
    {
      result.push_back(i);
    }
  }
  reverse(result.begin() , result.end());
  cout << result[K - 1] << endl;
}