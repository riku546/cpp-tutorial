#include <bits/stdc++.h>
using namespace std;

int main()
{
  int numbers_len;
  std::vector<int> numbers(numbers_len);
  cout << "入力する整数の個数を教えて下さい" << endl;
  cin >> numbers_len;
  std::cout << "整数を入力してください:" << std::endl;
  for (int i = 0; i < numbers_len; i++)
    cin >> numbers[i];

  // 合計の計算
  int sum = 0;
  for (int i = 0; i < numbers.size(); i++)
  {
    sum += numbers[i];
  }

  // 平均の計算
  double avg = 0;
  if (numbers.size() > 0)
  {
    avg = sum / numbers.size();
  }

  // 最大値と最小値の計算
  int max = std::numeric_limits<int>::min();
  int min = std::numeric_limits<int>::max();
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] > max)
    {
      max = numbers[i];
    }
    if (numbers[i] < min)
    {
      min = numbers[i];
    }
  }

  // ソート
  std::vector<int> sortedNumbers = numbers; // コピーを作成
  std::sort(sortedNumbers.begin(), sortedNumbers.end());

  // 結果の表示
  std::cout << "合計: " << sum << std::endl;
  std::cout << "平均: " << avg << std::endl;
  std::cout << "最大値: " << max << std::endl;
  std::cout << "最小値: " << min << std::endl;
  std::cout << "昇順ソート: ";
  for (int i = 0; i < sortedNumbers.size(); i++)
  {
    std::cout << sortedNumbers[i] << " ";
  }
  std::cout << std::endl;

  // 不要な処理の例
  std::cout << "このプログラムは非常に複雑です。" << std::endl;
  std::cout << "しかし、実際には平均だけが必要です。" << std::endl;

  return 0;
}
