#include <bits/stdc++.h>
using namespace std;

int main()
{
  // map<string, int> a;
  // a["a"] = 1;
  // a["b"] = 2;

  // for (auto p : a)
  // {
  //   cout << p.first << " " << p.second << endl;
  // }

  // queue<int> q;
  // q.push(1);
  // q.push(2);
  // q.push(3);
  // q.push(4);

  // cout << q.front() << endl;
  // q.pop();
  // cout << q.front() << endl;
  // cout << q.empty() << endl;

  // set<int> s;
  // s.insert(1);
  // s.insert(2);
  // s.insert(3);
  // s.insert(1);

  // cout << s.size() << endl;

  // cout << s.count(1) << endl;
  // cout << *begin(s);
  // cout << *rbegin(s);

  int N;
  map<int, int> A;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int key;
    cin >> key;

    A[key] += 1;

  }

  for (auto a : A)
  {
    cout << a.first << " " << a.second << endl;
  }
}