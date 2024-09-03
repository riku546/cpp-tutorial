#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using namespace std;

bool isCheep(int i, int D, int P, vector<int> F)
{
  
  long long total = 0;
  for (int j = i; j > i - D; j--)
  { 
    if(j < 0) continue;
    total += F[j];}

  return total > P ? true : false;
}

int main()
{
  int N, D, P;
  cin >> N >> D >> P;
  vector<int> F(N);
  rep(i, 0, N) cin >> F[i];
  long long ans = 0;
  sort(F.begin(), F.end());
  int i = N - 1;
  long long cnt = 0;
  while (isCheep(i, D, P, F))
  {
    
    cnt++;
    i -= D;
  }

  rep(j, 0, i + 1) ans += F[j];
  ans += P * cnt;
  cout << ans << endl;
}