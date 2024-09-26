#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  vector<int> AB = {};
  map<int, int> memory;
  rep(n, 0, N)
  {
    int temp;
    cin >> temp;
    A[n] = temp;
    AB.push_back(temp);
  }
  rep(m, 0, M)
  {
    int temp;
    cin >> temp;
    B[m] = temp;
    AB.push_back(temp);
  }

  sort(AB.begin(), AB.end());
  rep(i, 0, AB.size())
  {
    memory[AB[i]] = i + 1;
  }

  for (auto var : A)
  {
    cout << memory[var] << ' ';
  }
  cout << endl;

  for (auto var : B)
  {
    cout << memory[var] << ' ';
  }
  cout << endl;
}