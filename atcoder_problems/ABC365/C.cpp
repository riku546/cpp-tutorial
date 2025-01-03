// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// bool isValid(vector<ull> A, ull mid, ll M)
// {
//   ull total = 0;
//   rep(i, 0, A.size()) total += min(A[i], mid);
//   if (total <= M)
//     return true;
//   else
//     return false;
// }

// int binary_search(vector<ull> A, ll M)
// {
//   int left = 1;
//   ull right = 1e18;

//   while (right - left > 1)
//   {
//     ull mid = left + (right - left) / 2;
//     if (isValid(A, mid, M))
//       left = mid;
//     else
//       right = mid;
//   }

//   return left;
// }

// int main()
// {
//   int N;
//   ll M;
//   cin >> N >> M;
//   vector<ull> A(N);
//   rep(i, 0, N) cin >> A[i];
//   ull total = reduce(A.begin(), A.end());
//   if (total <= M)
//   {
//     cout << "infinite" << endl;
//     return 0;
//   }

//   cout << binary_search(A, M) << endl;
// }


