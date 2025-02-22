#include <iostream>

using namespace std;

void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 3;
  int b = 6;
  cout << " Before Swapping " << endl;
  cout << a << " " << b << endl;
  cout << "After Swapping" << endl;

  Swap(a, b);
  cout << a << " " << b << endl;

  return 0;
}
