// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   string S = "wbwbwwbwbwbw";
//   int W, B;
//   cin >> W >> B;
//   rep(i, 0, S.size())
//   {
//     int w_cnt = 0, b_cnt = 0;

//     rep(j, i, i + W + B)
//     {
//       if (S[j % 12] == 'w')
//         w_cnt++;
//       else
//         b_cnt++;
//     }
//     if (w_cnt == W && b_cnt == B)
//     {
//       cout << "Yes" << endl;
//       return 0;
//     }
//   }

//   cout << "No" << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H, vector<char>(W));
  rep(h, 0, H) rep(w, 0, W) cin >> S[h][w];

  rep(h, 0, H)
  {
    rep(w, 0, W - 1)
    {
      if (S[h][w] == 'T' && S[h][w + 1] == 'T')
      {
        
        S[h][w] = 'P';
        S[h][w + 1] = 'C';
        w++;
      }
    }
  }

  rep(h, 0, H)
  {
    rep(w, 0, W) cout << S[h][w];
    cout << endl;
  }
}