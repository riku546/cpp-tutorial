#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int recursion(int n1 , int n2){
    if(n2 == n1) return n1;
    return n2 + recursion(n1 , n2 - 1);
} 

int main()
{
  cout << recursion(3 , 10) << endl;
  cout << recursion(4 , 10) << endl;
  
}