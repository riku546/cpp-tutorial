#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int plus = 0;
  int minasu = 0;

  for (int i = 0; i < S.size(); i++)
  {
    if (S.at(i) == '+')
    {
      plus++;
    }
    else if (S.at(i) == '-')
    {
      minasu++;
      
    }
  }
  

  cout << 1 + (1 * plus) - (1 * minasu) << endl;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string S;
//   cin >> S;

//   // 計算結果を保持する変数
//   int answer = 1;

//   for (int i = 0; i < S.size(); i++) {

//     if (S.at(i) == '+') {
//       answer++;
//     }
//     if (S.at(i) == '-') {
//       answer--;
//     }

//   }

//   cout << answer << endl;
// }
