#include <iostream>
using namespace std;

int input() {
  int times;
  cout << "How many times? > ";
  cin >> times;
  return times;
}

void sum(const int times) {
  int sum = 0;
  int box[times];

  // 入力
  for (int i = 0; i < times; ++i) {
    int x;
    cout << "Enter an integer > ";
    cin >> x;
    box[i] = x;
  }

  // 出力
  for (int i = 0; i < times; ++i) {
    sum += box[i];
    cout << box[i];
    if (i == times - 1) {
      cout << " = ";
    } else {
      cout << " + ";
    }
  }
  cout << sum << endl;
}

int main() {
  const int times = input();
  if (times > 0) {
    sum(times);
  } else {
    cout << "Only positive number" << endl;
  }
}

