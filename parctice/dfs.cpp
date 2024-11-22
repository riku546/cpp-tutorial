// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;
// using Graph = vector<vector<int>>;

// int n, m;
// vector<int> seen(5);
// vector<int> todo;

// void dfs(Graph G, int node)
// {
//   seen[node] = 1;
//   cout << node << endl;
//   for (auto var : G[node])
//   {
//     if (seen[var] == 1)
//       continue;
//     dfs(G, var);
//   }
// }

// int main()
// {
//   cin >> n >> m;
//   Graph G(n);

//   rep(i, 0, m)
//   {
//     int a, b;
//     cin >> a >> b;
//     G[a - 1].push_back(b - 1);
//   }
//   dfs(G, 0);
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// vector<int> seen(10000);
// void dfs(vector<vector<int>> g, int node)
// {
//   seen[node] = 1;
//   for (auto var : g[node])
//   {
//     if (seen[var])
//       continue;

//     dfs(g, var);
//   }
// }

// int main()
// {
//   vector<vector<int>> di = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};
//   int w, h;
//   cin >> w >> h;
//   vector<vector<int>> c(h, vector<int>(w));
//   rep(i, 0, h) rep(j, 0, w) cin >> c[i][j];
//   vector<vector<int>> g(w * h);
//   rep(y, 0, h)
//   {
//     rep(x, 0, w)
//     {
//       if (!c[y][x])
//         continue;
//       for (auto var : di)
//       {
//         int dx = x + var[1];
//         int dy = y + var[0];
//         if (dx <= -1 || dx >= w)
//           continue;
//         if (dy <= -1 || dy >= h)
//           continue;
//         if (c[dy][dx])
//         {
//           g[(x + (y * w))].push_back(dx + (dy * w));
//           // g[dx + (dy * w)].push_back(x + (y * w));
//         }
//       }
//     }
//   }
//   int cnt = 0;
//   rep(i, 0, c.size())
//   {
//     rep(j, 0, c[i].size())
//     {
//       if (seen[j + (i * w)])
//         continue;
//       if (c[i][j] == 0)
//         continue;

//       dfs(g, j + (i * w));
//       cnt++;
//     }
//   }
//   cout << cnt << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// void dfs(vector<int>temp , int num , int len){
//   if(temp.size() == len){
//     rep(i , 0 , temp.size()) cout << temp[i] << ' ';
//     cout << endl;
//     return ;
//   }

//   rep(i , 1 , num + 1){
//     temp.push_back(i);
//     dfs(temp , num , len);
//     temp.pop_back();
//   }
// }

// int main(){
//   vector<int>temp = {};
//   dfs(temp , 3 , 3);
// }



#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

vector<int>temp(101);

void dfs(vector<vector<int>>G , int node){
  temp[node] = 1;
  for(auto var : G[node])
  {
    if(temp[var])continue;
    dfs(G , var);
  }
}

int main(){
  int n , m;
  cin >> n >> m;
  vector<vector<int>>G(n);
  rep(i , 0 , m){
    int u1 , u2;
    cin >> u1 >> u2;
    u1--;u2--;
    G[u1].push_back(u2);
    G[u2].push_back(u1);
  }

  int ans = 0;
  rep(i , 0 , n){
    if(temp[i]) continue;
    dfs(G , i);
    ans++;
  }

  cout  << ans << endl;
  
}