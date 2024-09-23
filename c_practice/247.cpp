#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<string> S = {"1"};
  if (N == 1)
  {
    cout << 1 << endl;
    return 0;
  }
  int index = 0;
  rep(n, 2, N)
  {
    string sn = S[index] + ' ' + to_string(n) + ' ' + S[index];
    S.push_back(sn);
    index++;
  }

  string ans = S[index] + to_string(N) + S[index];
  cout << ans << endl;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>    //sort, lower_bound, next_permutation, reverse
// using namespace std;

// int main()
// {
//     int N;
//     int i;
//     string S[17];

//     cin >> N;
//     S[1] = "1";
//     for(i=2; i<=N; i++) {
//         S[i] = S[i-1] + " " + to_string(i) + " " + S[i-1];
//     }
//     cout << S[N] << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//   int N;
//   cin >> N;

//   vector<string> S = {"1"};

//   for (int n = 2; n <= N; n++)
//   {
//     string sn = S.back() + to_string(n) + S.back();
//     S.push_back(sn);
//   }

//   string ans = S.back();
//   for (int i = 0; i < ans.size(); i++)
//   {
//     if (i > 0)
//       cout << " ";
//     cout << ans[i];
//   }
//   cout << endl;

//   return 0;
// }