#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{

    int q;
    cin >> q;
    queue<int> que;

    rep(i, 0, q)
    {
        int q1, q2;
        cin >> q1;
        if (q1 == 1)
        {
            cin >> q2;
            que.push(q2);
        }
        else
        {

            cout << que.front() << endl;
            que.pop();
        }
    }
}