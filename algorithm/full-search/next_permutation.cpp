#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <iomanip>

using namespace std;
#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

int main() {
    int n, a, b;
    cin >> n;
    
    vector<int>p(n),q(n);
    
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) cin >> q[i];
    
    vector<int>array(n);
    rep(i, 1, n + 1) array[i - 1] = i;  

    int cnt = 0;
    do
    {
        cnt++;
        if(array == p) a = cnt;
        if(array == q) b = cnt;
    
    } while (next_permutation(array.begin(), array.end()));
    

    cout << abs(a - b) << endl;
    return 0;
}

