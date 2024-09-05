#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> age(N);
  int min_person;
  int min_age = 1000000000;
  rep(i, 0, N)
  {

    cin >> S[i] >> age[i];
  }
  rep(i, 0, N)
  {
    if (min_age > age[i])
    {
      min_age = min(min_age, age[i]);
      min_person = i;
    }
  }
  
  rep(i, min_person, N) cout << S[i] << endl;
  rep(j, 0, min_person) cout << S[j] << endl;
}