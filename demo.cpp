#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

void show(int a, int b) {
  cout << a << " + " << b << " = " << add(a, b) << endl;
}

void showPi() {
  double pi = 3.14159;
  cout << "π = " << pi << "..." << endl;
}

int main() {
  show(3, 4);
  showPi();
}

