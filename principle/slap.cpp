#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

void printPrice(int price, string priceType)
{
  cout << priceType << ": " << price << '円' << endl;
}

class calcPrice
{
  int total(vector<int> prices)
  {
    return reduce(prices.begin(), prices.end());
  }

  double discount(int price, double discountRate)
  {
    return price * (1 - discountRate);
  }

  double tax(int price, double taxRate)
  {
    return price * (1 + taxRate);
  }
};

int main()
{
  
}