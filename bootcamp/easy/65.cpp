#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int firstA = -1;
    int lastZ = -1;

    // 先頭のAを探す
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'A') {
            firstA = i;
            break;
        }
    }

    // 末尾のZを探す
    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == 'Z') {
            lastZ = i;
            break;
        }
    }

    // 最大の長さを計算
    int maxLength = lastZ - firstA + 1;

    cout << maxLength << endl;

    return 0;
}
