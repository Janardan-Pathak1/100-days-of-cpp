// default functions

#include <iostream>

using namespace std;

void func2(int num, int num2 = 6) { // default arguments  in a function

  cout << num * num2 << endl;
}

int main() {

  func2(2, 7);
  func2(2);

  return 0;
}
