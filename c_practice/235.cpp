#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  int N , Q;
  cin >> N >> Q;
  map<int , vector<int>>memory;

  rep(n ,0, N){
    int a;
    cin >> a;
    memory[a].push_back(n + 1);
  }

  rep(q , 0 , Q){
    int x , k;
    cin >> x >> k;
    if(memory[x].size() < k){
      cout << -1 << endl;
    }else{
      cout << memory[x][k - 1] << endl;
    }
  }
}