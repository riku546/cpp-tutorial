#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;


int main(){
  int N , K , M;
  cin >> N >> K >> M;
   
  int temp_total = 0;
  vector<int>A(N- 1) ;
  rep(i , N - 1){ 
    cin >>A[i];
    temp_total += A[i];
    }
    
  
  rep(y, K + 1) {

    if((temp_total + y) / N >= M){ cout << y <<endl;
      return 0;
    }
  }

  cout << -1 << endl;
}