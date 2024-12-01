// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int main()
// {
//   int A, B, C, X, Y;
//   cin >> A >> B >> C >> X >> Y;
//   ll ans = 50000000000;
//   rep(i, 0, 201010)
//   {
//     ll price = C * i;
//     if (X - (i / 2) > 0)
//       price += A * (X - (i / 2));
//     if (Y - (i / 2) > 0)
//       price += B * (Y - (i / 2));

//     ans = min(ans, price);
//   }

//   cout << ans << endl;
// }


// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;



// int main(){
//   int n; cin >> n;
//   int ans = 0;
//   rep(i ,   1 , n + 1) {
//     if(i % 2 == 0) continue;
//     int cnt = 0;
//     rep(j ,  1 , pow(i , 1.0 / 2.0) + 1){
//       if(i % j == 0) cnt++;
//     }
//     if(cnt == 4) ans ++ ;
//   }

//   cout << ans << endl;
// }

