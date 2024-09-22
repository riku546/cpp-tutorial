// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int N, M;
//   cin >> N >> M;
//   vector<int> A(M);
//   rep(i, 0, M) cin >> A[i];

//   int index = 0;
//   int temp = A[index];
//   rep(i, 1, N + 1)
//   {
//     cout << temp - i << endl;

//     if (temp == i)
//     {
//       index++;
//       temp = A[index];
//     }
//   }
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  string S;
  cin >> S;

  // set<int> ans = {};
  int ans = 0;
  int cm = M;
  int temp = 0;
  rep(i, 0, S.size())
  {

    if (S[i] == '1')
    {
      if (cm - 1 >= 0)
        cm--;
      else
        temp++;
    }
    else if (S[i] == '2')
      temp++;
    else
    {
      ans = max(ans, temp);
      temp = 0;
      cm = M;
    }
  }

  if (temp != 0)
  {
    ans = max(ans, temp);
  }
  cout << ans << endl;
}