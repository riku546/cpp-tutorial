#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    rep(i, 1, n + 1){
        if(i % 2 == 0) continue;
        
        int cnt = 0;
        rep(j, 1, i + 1){
            if(i % j == 0) cnt++;
        }
        if(cnt == 8)result++;
    }
    
    cout << result << endl;
    return 0;
}