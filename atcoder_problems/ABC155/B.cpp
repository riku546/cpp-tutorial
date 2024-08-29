#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
  int N ;
  cin >> N;

  vector<int>A(N);
  rep(i , N) cin >> A[i];

  rep(j , N) {
    if(A[j] % 2 == 0){
      if(A[j] % 3 != 0 && A[j] % 5 != 0){
        cout << "DENIED" << endl;
        return 0;
      }
    }
  }
  cout << "APPROVED" << endl;
}