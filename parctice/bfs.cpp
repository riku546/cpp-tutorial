#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;


int main(){
  int n , m;cin >> n >> m;
  Graph g(n);
  rep(i , 0 , m){
    int a , b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int>dist(n , -1);
  queue<int>q;

  q.push(0);
  dist[0] = 0;
  

  while (!q.empty())
  {
    int v = q.front();
    cout << v << ", ";
    q.pop();

    for(auto var : g[v])
    {
      if (dist[var] != -1) continue;

      q.push(var);
      dist[var] = dist[v] + 1;
    }
  }


}