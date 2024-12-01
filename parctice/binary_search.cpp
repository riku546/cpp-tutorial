// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// int binary_search(vector<int> arr, int value)
// {
//   int right = arr.size() - 1, left = 0;
//   while (right - left > 1)
//   {
//     ll mid = (right + left) / 2;
//     if (arr[mid] == value)
//     {
//       return mid;
//     }
//     else if (arr[mid] < value)
//       left = mid;
//     else
//       right = mid;
//   }
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   cout << binary_search(arr, 3) << endl;
// }

// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ull = unsigned long long;
// using ll = long long;
// using namespace std;

// bool isOk(vector<int> a, ll mid , ll m)
// {
//   ll total  = 0;
//   rep(i , 0 , a.size()) {
//     total += (ll)min((ll)a[i] , mid);
//   }
//   if(total <= m) return true;
//   else return false;

// }

// int binary_search(vector<int> a , ll m)
// {
//   ll left = 0;
//   ll right = 2e15;

//   while (right - left > 1)
//   {
//     ll mid = (right + left) / 2;
//     if (isOk(a, mid , m))
//       left = mid;
//     else
//       right = mid;
//   }

//   return left;
// }

// int main()
// {
//   ll n, m;
//   cin >> n >> m;
//   vector<int> a(n);
//   rep(i , 0 , n) cin >> a[i];
//   ll total = reduce(a.begin(), a.end(), 0LL);
//   if (total <= m)
//   {
//     cout << "infinite" << endl;
//     return 0;
//   }

//   ll ans = binary_search(a , m);
//   cout << ans << endl;
// }

