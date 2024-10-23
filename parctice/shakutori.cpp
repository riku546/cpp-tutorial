#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* 入力受け取り */
    int n;
    long long K;
    cin >> n >> K;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    /* 0 があったら n をリターン */
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            cout << n << endl;
            return 0;
        }
    }
    
    /* しゃくとり法 */
    int res = 0;
    int right = 0;
    long long mul = 1;
    for (int left = 0; left < n; ++left) {
        while (right < n && mul * a[right] <= K) {
            mul *= a[right];
            ++right;
        }
        res = max(res, right - left); // 更新
        if (left == right) ++right;
        else mul /= a[left]; // left を除く
    }
    
    cout << res << endl;
}
