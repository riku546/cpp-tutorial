// #include <bits/stdc++.h>
// #define rep(i, m, n) for(int i = m; i < n; i++)
// using namespace std;

// int main(){
//     int n;

//     cin >> n;
//     vector<int>A(n);
//     rep(i, 0, n) cin >> A[i];

//     int q;
//     cin >> q;
//     vector<int>m(q);
//     rep(i, 0, q) cin >> m[i];

//     set<int> set;

//     rep(i, 0, 1 << n){
//         int sum = 0;
//         rep(j, 0, n){
//             if(i & (1 << j)) sum+= A[j];
//         }
//         set.insert(sum);
//     }

//     rep(i, 0, q){
//         if(set.contains(m[i])) {
//             cout << "yes" << endl;
//         }else{
//             cout <<  "no" << endl;
//         }
//     }

//     return 0;
// }

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> result;
  vector<int> switches(n);

  rep(i, 0, n) cin >> switches[i];
  rep(i, 0, 1 << n) {
    vector<int> temp = {};
    rep(j, 0, n) {
      if (i & (1 << j))
        temp.push_back(switches[j]);
    }
    result.push_back(temp);
  }

  rep(i, 0, result.size()){
    rep(j, 0, result[i].size()) cout << result[i][j] << " ";
    cout << endl;
  }

  return 0;
}
