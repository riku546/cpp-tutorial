// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   ull N, K;
//   cin >> N >> K;

//   if (K == 1)
//   {
//     cout << 0 << endl;
//   }
//   else if (N % 2 == 0 && K % 2 == 0)
//   {
//     cout << 2 << endl;
//   }
//   else if (N % 2 != 0 && K % 2 != 0)
//   {
//     cout << 0 << endl;
//   }
//   else if (N % 2 == 0 && K % 2 != 0)
//   {
//     cout << 1 << endl;
//   }
//   else if (N % 2 != 0 && K % 2 == 0)
//   {
//     cout << 1 << endl;
//   }
// }

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    // 基本的に、N を K で割った余りを計算し、それと K の差の絶対値を取ることで最小値を求める
    if (K == 0) {
        // K が 0 の場合、操作は意味がないので N はそのまま
        cout << N << endl;
    } else {
        // N を K で割った余りが N の最小値を決定する
        long long remainder = N % K;
        long long min_value = min(remainder, abs(remainder - K));
        cout << min_value << endl;
    }

    return 0;
}
